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

// Function: entry_0012cf60
// Address: 0x12cf60 - 0x12cf8c
void entry_0012cf60_0x12cf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cf60_0x12cf60");
#endif

    switch (ctx->pc) {
        case 0x12cf6cu: goto label_12cf6c;
        default: break;
    }

    ctx->pc = 0x12cf60u;

    // 0x12cf60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12cf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf64: 0xc04b65c  jal         func_12D970
    ctx->pc = 0x12CF64u;
    SET_GPR_U32(ctx, 31, 0x12CF6Cu);
    ctx->pc = 0x12CF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF64u;
    // 0x12cf68: 0x24a52f60  addiu       $a1, $a1, 0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D970u, 0x12CF64u, 0x12CF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF6Cu;
label_12cf6c:
    // 0x12cf6c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x12cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x12cf70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12cf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12cf74: 0x0  nop
    ctx->pc = 0x12cf74u;
    // NOP
    // 0x12cf78: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x12cf78u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x12cf7c: 0x0  nop
    ctx->pc = 0x12cf7cu;
    // NOP
    // 0x12cf80: 0x0  nop
    ctx->pc = 0x12cf80u;
    // NOP
    // 0x12cf84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12CF84u;
    {
        const bool branch_taken_0x12cf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF84u;
        // 0x12cf88: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf84) {
            ctx->pc = 0x12CF9Cu;
            return;
        }
    }
    ctx->pc = 0x12CF8Cu;
}
