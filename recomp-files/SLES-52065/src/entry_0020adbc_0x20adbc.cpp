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

// Function: entry_0020adbc
// Address: 0x20adbc - 0x20aebc
void entry_0020adbc_0x20adbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020adbc_0x20adbc");
#endif

    switch (ctx->pc) {
        case 0x20adc4u: goto label_20adc4;
        case 0x20addcu: goto label_20addc;
        case 0x20adf4u: goto label_20adf4;
        case 0x20ae0cu: goto label_20ae0c;
        case 0x20ae24u: goto label_20ae24;
        case 0x20ae3cu: goto label_20ae3c;
        case 0x20ae54u: goto label_20ae54;
        case 0x20ae6cu: goto label_20ae6c;
        case 0x20ae84u: goto label_20ae84;
        case 0x20ae9cu: goto label_20ae9c;
        case 0x20aeb4u: goto label_20aeb4;
        default: break;
    }

    ctx->pc = 0x20adbcu;

    // 0x20adbc: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20ADBCu;
    SET_GPR_U32(ctx, 31, 0x20ADC4u);
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20ADBCu, 0x20ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ADC4u;
label_20adc4:
    // 0x20adc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20adc8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20adcc: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x20adccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x20add0: 0x24845d18  addiu       $a0, $a0, 0x5D18
    ctx->pc = 0x20add0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23832));
    // 0x20add4: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20ADD4u;
    SET_GPR_U32(ctx, 31, 0x20ADDCu);
    ctx->pc = 0x20ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ADD4u;
    // 0x20add8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20ADD4u, 0x20ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ADDCu;
label_20addc:
    // 0x20addc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20addcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ade0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ade4: 0x34429030  ori         $v0, $v0, 0x9030
    ctx->pc = 0x20ade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36912);
    // 0x20ade8: 0x24845d28  addiu       $a0, $a0, 0x5D28
    ctx->pc = 0x20ade8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23848));
    // 0x20adec: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20ADECu;
    SET_GPR_U32(ctx, 31, 0x20ADF4u);
    ctx->pc = 0x20ADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ADECu;
    // 0x20adf0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20ADECu, 0x20ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ADF4u;
label_20adf4:
    // 0x20adf4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20adf8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20adfc: 0x34429010  ori         $v0, $v0, 0x9010
    ctx->pc = 0x20adfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36880);
    // 0x20ae00: 0x24845d38  addiu       $a0, $a0, 0x5D38
    ctx->pc = 0x20ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23864));
    // 0x20ae04: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE04u;
    SET_GPR_U32(ctx, 31, 0x20AE0Cu);
    ctx->pc = 0x20AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE04u;
    // 0x20ae08: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE04u, 0x20AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE0Cu;
label_20ae0c:
    // 0x20ae0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ae10: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ae14: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x20ae14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
    // 0x20ae18: 0x24845d48  addiu       $a0, $a0, 0x5D48
    ctx->pc = 0x20ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23880));
    // 0x20ae1c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE1Cu;
    SET_GPR_U32(ctx, 31, 0x20AE24u);
    ctx->pc = 0x20AE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE1Cu;
    // 0x20ae20: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE1Cu, 0x20AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE24u;
label_20ae24:
    // 0x20ae24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ae28: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ae2c: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x20ae2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x20ae30: 0x24845d58  addiu       $a0, $a0, 0x5D58
    ctx->pc = 0x20ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23896));
    // 0x20ae34: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE34u;
    SET_GPR_U32(ctx, 31, 0x20AE3Cu);
    ctx->pc = 0x20AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE34u;
    // 0x20ae38: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE34u, 0x20AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE3Cu;
label_20ae3c:
    // 0x20ae3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ae40: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ae44: 0x3442a030  ori         $v0, $v0, 0xA030
    ctx->pc = 0x20ae44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41008);
    // 0x20ae48: 0x24845d68  addiu       $a0, $a0, 0x5D68
    ctx->pc = 0x20ae48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23912));
    // 0x20ae4c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE4Cu;
    SET_GPR_U32(ctx, 31, 0x20AE54u);
    ctx->pc = 0x20AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE4Cu;
    // 0x20ae50: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE4Cu, 0x20AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE54u;
label_20ae54:
    // 0x20ae54: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ae58: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ae5c: 0x3442a010  ori         $v0, $v0, 0xA010
    ctx->pc = 0x20ae5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40976);
    // 0x20ae60: 0x24845d78  addiu       $a0, $a0, 0x5D78
    ctx->pc = 0x20ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23928));
    // 0x20ae64: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE64u;
    SET_GPR_U32(ctx, 31, 0x20AE6Cu);
    ctx->pc = 0x20AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE64u;
    // 0x20ae68: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE64u, 0x20AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE6Cu;
label_20ae6c:
    // 0x20ae6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ae70: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ae74: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x20ae74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
    // 0x20ae78: 0x24845d88  addiu       $a0, $a0, 0x5D88
    ctx->pc = 0x20ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23944));
    // 0x20ae7c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE7Cu;
    SET_GPR_U32(ctx, 31, 0x20AE84u);
    ctx->pc = 0x20AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE7Cu;
    // 0x20ae80: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE7Cu, 0x20AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE84u;
label_20ae84:
    // 0x20ae84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ae88: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ae8c: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x20ae8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x20ae90: 0x24845d98  addiu       $a0, $a0, 0x5D98
    ctx->pc = 0x20ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23960));
    // 0x20ae94: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE94u;
    SET_GPR_U32(ctx, 31, 0x20AE9Cu);
    ctx->pc = 0x20AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE94u;
    // 0x20ae98: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE94u, 0x20AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE9Cu;
label_20ae9c:
    // 0x20ae9c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20aea0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20aea4: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x20aea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x20aea8: 0x24845db0  addiu       $a0, $a0, 0x5DB0
    ctx->pc = 0x20aea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23984));
    // 0x20aeac: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AEACu;
    SET_GPR_U32(ctx, 31, 0x20AEB4u);
    ctx->pc = 0x20AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AEACu;
    // 0x20aeb0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AEACu, 0x20AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AEB4u;
label_20aeb4:
    // 0x20aeb4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20AEB4u;
    {
        const bool branch_taken_0x20aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEB4u;
        // 0x20aeb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aeb4) {
            ctx->pc = 0x20AF30u;
            return;
        }
    }
    ctx->pc = 0x20AEBCu;
}
