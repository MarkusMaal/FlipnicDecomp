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

// Function: entry_00102e40
// Address: 0x102e40 - 0x102ee8
void entry_00102e40_0x102e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102e40_0x102e40");
#endif

    switch (ctx->pc) {
        case 0x102e50u: goto label_102e50;
        case 0x102e9cu: goto label_102e9c;
        case 0x102eacu: goto label_102eac;
        case 0x102ed0u: goto label_102ed0;
        default: break;
    }

    ctx->pc = 0x102e40u;

    // 0x102e40: 0x86850020  lh          $a1, 0x20($s4)
    ctx->pc = 0x102e40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x102e44: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102e48: 0xc05719c  jal         func_15C670
    ctx->pc = 0x102E48u;
    SET_GPR_U32(ctx, 31, 0x102E50u);
    ctx->pc = 0x102E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E48u;
    // 0x102e4c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C670u, 0x102E48u, 0x102E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E50u;
label_102e50:
    // 0x102e50: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x102e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102e54: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x102e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x102e58: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x102e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x102e5c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x102e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x102e60: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x102e60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x102e64: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x102e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x102e68: 0xac622cd8  sw          $v0, 0x2CD8($v1)
    ctx->pc = 0x102e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 2));
    // 0x102e6c: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x102e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102e70: 0x8c432c1c  lw          $v1, 0x2C1C($v0)
    ctx->pc = 0x102e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
    // 0x102e74: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x102e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x102e78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x102e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x102e7c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x102e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x102e80: 0xac4301d8  sw          $v1, 0x1D8($v0)
    ctx->pc = 0x102e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
    // 0x102e84: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x102e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102e88: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x102e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x102e8c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x102e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x102e90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x102e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102e94: 0xc05f854  jal         func_17E150
    ctx->pc = 0x102E94u;
    SET_GPR_U32(ctx, 31, 0x102E9Cu);
    ctx->pc = 0x102E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E94u;
    // 0x102e98: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E150u, 0x102E94u, 0x102E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E9Cu;
label_102e9c:
    // 0x102e9c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x102e9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ea0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x102ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ea4: 0xc05f870  jal         func_17E1C0
    ctx->pc = 0x102EA4u;
    SET_GPR_U32(ctx, 31, 0x102EACu);
    ctx->pc = 0x102EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102EA4u;
    // 0x102ea8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1C0u, 0x102EA4u, 0x102EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102EACu;
label_102eac:
    // 0x102eac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x102eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102eb0: 0x8682002c  lh          $v0, 0x2C($s4)
    ctx->pc = 0x102eb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x102eb4: 0x441002f  bgez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x102EB4u;
    {
        const bool branch_taken_0x102eb4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x102eb4) {
            ctx->pc = 0x102F74u;
            return;
        }
    }
    ctx->pc = 0x102EBCu;
    // 0x102ebc: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x102ec0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x102ec4: 0x86960020  lh          $s6, 0x20($s4)
    ctx->pc = 0x102ec4u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x102ec8: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x102EC8u;
    SET_GPR_U32(ctx, 31, 0x102ED0u);
    ctx->pc = 0x102ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102EC8u;
    // 0x102ecc: 0x24a5e088  addiu       $a1, $a1, -0x1F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102EC8u, 0x102ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102ED0u;
label_102ed0:
    // 0x102ed0: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x102ED0u;
    {
        const bool branch_taken_0x102ed0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x102ed0) {
            ctx->pc = 0x102F5Cu;
            return;
        }
    }
    ctx->pc = 0x102ED8u;
    // 0x102ed8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102ED8u;
    {
        const bool branch_taken_0x102ed8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x102EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102ED8u;
        // 0x102edc: 0x8f838388  lw          $v1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ed8) {
            ctx->pc = 0x102EE8u;
            return;
        }
    }
    ctx->pc = 0x102EE0u;
    // 0x102ee0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x102EE0u;
    {
        const bool branch_taken_0x102ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EE0u;
        // 0x102ee4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ee0) {
            ctx->pc = 0x102F00u;
            return;
        }
    }
    ctx->pc = 0x102EE8u;
}
