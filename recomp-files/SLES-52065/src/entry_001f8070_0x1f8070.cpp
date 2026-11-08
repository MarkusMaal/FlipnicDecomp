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

// Function: entry_001f8070
// Address: 0x1f8070 - 0x1f80c0
void entry_001f8070_0x1f8070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8070_0x1f8070");
#endif

    switch (ctx->pc) {
        case 0x1f80a4u: goto label_1f80a4;
        case 0x1f80b8u: goto label_1f80b8;
        default: break;
    }

    ctx->pc = 0x1f8070u;

    // 0x1f8070: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f8070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f8074: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f8074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f8078: 0x2450cd00  addiu       $s0, $v0, -0x3300
    ctx->pc = 0x1f8078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954240));
    // 0x1f807c: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x1f807cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x1f8080: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f8084: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f8084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f808c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f808cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8090: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f8090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8094: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f8094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8098: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1f8098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f809c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F809Cu;
    SET_GPR_U32(ctx, 31, 0x1F80A4u);
    ctx->pc = 0x1F80A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F809Cu;
    // 0x1f80a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F809Cu, 0x1F80A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F80A4u;
label_1f80a4:
    // 0x1f80a4: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F80A4u;
    {
        const bool branch_taken_0x1f80a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f80a4) {
            ctx->pc = 0x1F80A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F80A4u;
            // 0x1f80a8: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F80C0u;
            return;
        }
    }
    ctx->pc = 0x1F80ACu;
    // 0x1f80ac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f80acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f80b0: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F80B0u;
    SET_GPR_U32(ctx, 31, 0x1F80B8u);
    ctx->pc = 0x1F80B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F80B0u;
    // 0x1f80b4: 0x8c44bb2c  lw          $a0, -0x44D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F80B0u, 0x1F80B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F80B8u;
label_1f80b8:
    // 0x1f80b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F80B8u;
    {
        const bool branch_taken_0x1f80b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80B8u;
        // 0x1f80bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80b8) {
            ctx->pc = 0x1F8104u;
            return;
        }
    }
    ctx->pc = 0x1F80C0u;
}
