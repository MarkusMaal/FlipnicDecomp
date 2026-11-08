#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001fac74
// Address: 0x1fac74 - 0x1faca8
void entry_001fac74_0x1fac74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fac74_0x1fac74");
#endif

    switch (ctx->pc) {
        case 0x1fac84u: goto label_1fac84;
        default: break;
    }

    ctx->pc = 0x1fac74u;

    // 0x1fac74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fac74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fac78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fac78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fac7c: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x1FAC7Cu;
    SET_GPR_U32(ctx, 31, 0x1FAC84u);
    ctx->pc = 0x1FAC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC7Cu;
    // 0x1fac80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1FAC7Cu, 0x1FAC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC84u;
label_1fac84:
    // 0x1fac84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fac84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac88: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FAC88u;
    {
        const bool branch_taken_0x1fac88 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1FAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC88u;
        // 0x1fac8c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac88) {
            ctx->pc = 0x1FACD0u;
            return;
        }
    }
    ctx->pc = 0x1FAC90u;
    // 0x1fac90: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fac90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fac94: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1fac94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1fac98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fac98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fac9c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1fac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1faca0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1faca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1faca4: 0x0  nop
    ctx->pc = 0x1faca4u;
    // NOP
    ctx->pc = 0x1faca8u;
}
