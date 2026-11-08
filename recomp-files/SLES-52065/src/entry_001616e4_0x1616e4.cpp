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

// Function: entry_001616e4
// Address: 0x1616e4 - 0x16171c
void entry_001616e4_0x1616e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001616e4_0x1616e4");
#endif

    switch (ctx->pc) {
        case 0x161708u: goto label_161708;
        default: break;
    }

    ctx->pc = 0x1616e4u;

    // 0x1616e4: 0x0  nop
    ctx->pc = 0x1616e4u;
    // NOP
    // 0x1616e8: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x1616e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1616ec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1616ECu;
    {
        const bool branch_taken_0x1616ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1616ec) {
            ctx->pc = 0x1616B0u;
            return;
        }
    }
    ctx->pc = 0x1616F4u;
    // 0x1616f4: 0x860701f4  lh          $a3, 0x1F4($s0)
    ctx->pc = 0x1616f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1616f8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1616f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1616fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1616fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x161700: 0xc05853c  jal         func_1614F0
    ctx->pc = 0x161700u;
    SET_GPR_U32(ctx, 31, 0x161708u);
    ctx->pc = 0x161704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161700u;
    // 0x161704: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1614F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614F0u, 0x161700u, 0x161708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161708u;
label_161708:
    // 0x161708: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x161708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16170c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16170cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161710: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x161710u;
    {
        const bool branch_taken_0x161710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161710u;
        // 0x161714: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161710) {
            ctx->pc = 0x16173Cu;
            return;
        }
    }
    ctx->pc = 0x161718u;
    // 0x161718: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x161718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->pc = 0x16171cu;
}
