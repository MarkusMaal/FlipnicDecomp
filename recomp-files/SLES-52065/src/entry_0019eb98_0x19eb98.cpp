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

// Function: entry_0019eb98
// Address: 0x19eb98 - 0x19ec3c
void entry_0019eb98_0x19eb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eb98_0x19eb98");
#endif

    switch (ctx->pc) {
        case 0x19ebccu: goto label_19ebcc;
        case 0x19ebe0u: goto label_19ebe0;
        case 0x19ebf4u: goto label_19ebf4;
        case 0x19ec08u: goto label_19ec08;
        case 0x19ec1cu: goto label_19ec1c;
        case 0x19ec30u: goto label_19ec30;
        default: break;
    }

    ctx->pc = 0x19eb98u;

    // 0x19eb98: 0xae800320  sw          $zero, 0x320($s4)
    ctx->pc = 0x19eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 0));
    // 0x19eb9c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19eb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19eba0: 0xaf9486f8  sw          $s4, -0x7908($gp)
    ctx->pc = 0x19eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U32(ctx, 20));
    // 0x19eba4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19eba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eba8: 0xae800688  sw          $zero, 0x688($s4)
    ctx->pc = 0x19eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 0));
    // 0x19ebac: 0x24a50288  addiu       $a1, $a1, 0x288
    ctx->pc = 0x19ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 648));
    // 0x19ebb0: 0xae80068c  sw          $zero, 0x68C($s4)
    ctx->pc = 0x19ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1676), GPR_U32(ctx, 0));
    // 0x19ebb4: 0xae800690  sw          $zero, 0x690($s4)
    ctx->pc = 0x19ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 0));
    // 0x19ebb8: 0xae800694  sw          $zero, 0x694($s4)
    ctx->pc = 0x19ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 0));
    // 0x19ebbc: 0xae800698  sw          $zero, 0x698($s4)
    ctx->pc = 0x19ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1688), GPR_U32(ctx, 0));
    // 0x19ebc0: 0xae80069c  sw          $zero, 0x69C($s4)
    ctx->pc = 0x19ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 0));
    // 0x19ebc4: 0xc064918  jal         func_192460
    ctx->pc = 0x19EBC4u;
    SET_GPR_U32(ctx, 31, 0x19EBCCu);
    ctx->pc = 0x19EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBC4u;
    // 0x19ebc8: 0xae8306a0  sw          $v1, 0x6A0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1696), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19EBC4u, 0x19EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBCCu;
label_19ebcc:
    // 0x19ebcc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19ebccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19ebd0: 0xae820678  sw          $v0, 0x678($s4)
    ctx->pc = 0x19ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1656), GPR_U32(ctx, 2));
    // 0x19ebd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebd8: 0xc064918  jal         func_192460
    ctx->pc = 0x19EBD8u;
    SET_GPR_U32(ctx, 31, 0x19EBE0u);
    ctx->pc = 0x19EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBD8u;
    // 0x19ebdc: 0x24a50298  addiu       $a1, $a1, 0x298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19EBD8u, 0x19EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBE0u;
label_19ebe0:
    // 0x19ebe0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19ebe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19ebe4: 0xae820670  sw          $v0, 0x670($s4)
    ctx->pc = 0x19ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1648), GPR_U32(ctx, 2));
    // 0x19ebe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebec: 0xc064918  jal         func_192460
    ctx->pc = 0x19EBECu;
    SET_GPR_U32(ctx, 31, 0x19EBF4u);
    ctx->pc = 0x19EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBECu;
    // 0x19ebf0: 0x24a502a8  addiu       $a1, $a1, 0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19EBECu, 0x19EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBF4u;
label_19ebf4:
    // 0x19ebf4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19ebf8: 0xae82067c  sw          $v0, 0x67C($s4)
    ctx->pc = 0x19ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1660), GPR_U32(ctx, 2));
    // 0x19ebfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec00: 0xc064918  jal         func_192460
    ctx->pc = 0x19EC00u;
    SET_GPR_U32(ctx, 31, 0x19EC08u);
    ctx->pc = 0x19EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC00u;
    // 0x19ec04: 0x24a502b0  addiu       $a1, $a1, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19EC00u, 0x19EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC08u;
label_19ec08:
    // 0x19ec08: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19ec0c: 0xae820680  sw          $v0, 0x680($s4)
    ctx->pc = 0x19ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 2));
    // 0x19ec10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec14: 0xc064918  jal         func_192460
    ctx->pc = 0x19EC14u;
    SET_GPR_U32(ctx, 31, 0x19EC1Cu);
    ctx->pc = 0x19EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC14u;
    // 0x19ec18: 0x24a502c0  addiu       $a1, $a1, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19EC14u, 0x19EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC1Cu;
label_19ec1c:
    // 0x19ec1c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19ec20: 0xae820684  sw          $v0, 0x684($s4)
    ctx->pc = 0x19ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1668), GPR_U32(ctx, 2));
    // 0x19ec24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ec24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec28: 0xc064918  jal         func_192460
    ctx->pc = 0x19EC28u;
    SET_GPR_U32(ctx, 31, 0x19EC30u);
    ctx->pc = 0x19EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC28u;
    // 0x19ec2c: 0x24a502d0  addiu       $a1, $a1, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19EC28u, 0x19EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC30u;
label_19ec30:
    // 0x19ec30: 0xae820674  sw          $v0, 0x674($s4)
    ctx->pc = 0x19ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1652), GPR_U32(ctx, 2));
    // 0x19ec34: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x19ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x19ec38: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x19ec38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x19ec3cu;
}
