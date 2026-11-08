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

// Function: entry_00205cac
// Address: 0x205cac - 0x205ce4
void entry_00205cac_0x205cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205cac_0x205cac");
#endif

    switch (ctx->pc) {
        case 0x205cc4u: goto label_205cc4;
        default: break;
    }

    ctx->pc = 0x205cacu;

    // 0x205cac: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x205cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
    // 0x205cb0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x205CB0u;
    {
        const bool branch_taken_0x205cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CB0u;
        // 0x205cb4: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205cb0) {
            ctx->pc = 0x205D08u;
            return;
        }
    }
    ctx->pc = 0x205CB8u;
    // 0x205cb8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x205cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x205cbc: 0xc07ef98  jal         func_1FBE60
    ctx->pc = 0x205CBCu;
    SET_GPR_U32(ctx, 31, 0x205CC4u);
    ctx->pc = 0x205CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CBCu;
    // 0x205cc0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE60u, 0x205CBCu, 0x205CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CC4u;
label_205cc4:
    // 0x205cc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205cc8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x205cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x205ccc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x205CCCu;
    {
        const bool branch_taken_0x205ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205ccc) {
            ctx->pc = 0x205CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205CCCu;
            // 0x205cd0: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205CE4u;
            return;
        }
    }
    ctx->pc = 0x205CD4u;
    // 0x205cd4: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x205cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x205cd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205CD8u;
    {
        const bool branch_taken_0x205cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205cd8) {
            ctx->pc = 0x205CF0u;
            return;
        }
    }
    ctx->pc = 0x205CE0u;
    // 0x205ce0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x205ce0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    ctx->pc = 0x205ce4u;
}
