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

// Function: entry_0017dad8
// Address: 0x17dad8 - 0x17db34
void entry_0017dad8_0x17dad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dad8_0x17dad8");
#endif

    switch (ctx->pc) {
        case 0x17daf4u: goto label_17daf4;
        case 0x17db10u: goto label_17db10;
        case 0x17db18u: goto label_17db18;
        case 0x17db30u: goto label_17db30;
        default: break;
    }

    ctx->pc = 0x17dad8u;

    // 0x17dad8: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x17dadc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17dae0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17dae4: 0x24a5f910  addiu       $a1, $a1, -0x6F0
    ctx->pc = 0x17dae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
    // 0x17dae8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17dae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17daec: 0xc0805c8  jal         func_201720
    ctx->pc = 0x17DAECu;
    SET_GPR_U32(ctx, 31, 0x17DAF4u);
    ctx->pc = 0x17DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DAECu;
    // 0x17daf0: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DAECu, 0x17DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DAF4u;
label_17daf4:
    // 0x17daf4: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x17daf8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17daf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17dafc: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x17dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x17db00: 0x24a5f910  addiu       $a1, $a1, -0x6F0
    ctx->pc = 0x17db00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
    // 0x17db04: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17db04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17db08: 0xc0805c8  jal         func_201720
    ctx->pc = 0x17DB08u;
    SET_GPR_U32(ctx, 31, 0x17DB10u);
    ctx->pc = 0x17DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB08u;
    // 0x17db0c: 0x27a70350  addiu       $a3, $sp, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DB08u, 0x17DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB10u;
label_17db10:
    // 0x17db10: 0xc04ce5c  jal         func_133970
    ctx->pc = 0x17DB10u;
    SET_GPR_U32(ctx, 31, 0x17DB18u);
    ctx->pc = 0x17DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB10u;
    // 0x17db14: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133970u, 0x17DB10u, 0x17DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB18u;
label_17db18:
    // 0x17db18: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x17db18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x17db1c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x17db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17db20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DB20u;
    {
        const bool branch_taken_0x17db20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB20u;
        // 0x17db24: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db20) {
            ctx->pc = 0x17DB34u;
            return;
        }
    }
    ctx->pc = 0x17DB28u;
    // 0x17db28: 0xc04ce5c  jal         func_133970
    ctx->pc = 0x17DB28u;
    SET_GPR_U32(ctx, 31, 0x17DB30u);
    ctx->pc = 0x133970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133970u, 0x17DB28u, 0x17DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB30u;
label_17db30:
    // 0x17db30: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x17db30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x17db34u;
}
