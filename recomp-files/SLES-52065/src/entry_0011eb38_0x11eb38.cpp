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

// Function: entry_0011eb38
// Address: 0x11eb38 - 0x11ec24
void entry_0011eb38_0x11eb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eb38_0x11eb38");
#endif

    switch (ctx->pc) {
        case 0x11eb54u: goto label_11eb54;
        case 0x11eb88u: goto label_11eb88;
        case 0x11eba4u: goto label_11eba4;
        case 0x11ebb0u: goto label_11ebb0;
        case 0x11ebd4u: goto label_11ebd4;
        case 0x11ebf8u: goto label_11ebf8;
        default: break;
    }

    ctx->pc = 0x11eb38u;

    // 0x11eb38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11eb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11eb3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11eb40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb44: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11eb44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eb48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11eb48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb4c: 0xc047b24  jal         func_11EC90
    ctx->pc = 0x11EB4Cu;
    SET_GPR_U32(ctx, 31, 0x11EB54u);
    ctx->pc = 0x11EB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB4Cu;
    // 0x11eb50: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC90u, 0x11EB4Cu, 0x11EB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB54u;
label_11eb54:
    // 0x11eb54: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x11eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x11eb58: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x11eb58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x11eb5c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x11eb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x11eb60: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x11eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x11eb64: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x11eb64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x11eb68: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11eb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11eb6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11eb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eb70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11eb70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11eb74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11eb78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11eb7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb80: 0xc047b40  jal         func_11ED00
    ctx->pc = 0x11EB80u;
    SET_GPR_U32(ctx, 31, 0x11EB88u);
    ctx->pc = 0x11EB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB80u;
    // 0x11eb84: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED00u, 0x11EB80u, 0x11EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB88u;
label_11eb88:
    // 0x11eb88: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x11eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x11eb8c: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x11eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x11eb90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11eb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb94: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x11eb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x11eb98: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x11eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x11eb9c: 0xc047b6c  jal         func_11EDB0
    ctx->pc = 0x11EB9Cu;
    SET_GPR_U32(ctx, 31, 0x11EBA4u);
    ctx->pc = 0x11EBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB9Cu;
    // 0x11eba0: 0x533821  addu        $a3, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EDB0u, 0x11EB9Cu, 0x11EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBA4u;
label_11eba4:
    // 0x11eba4: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x11eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x11eba8: 0xc047b98  jal         func_11EE60
    ctx->pc = 0x11EBA8u;
    SET_GPR_U32(ctx, 31, 0x11EBB0u);
    ctx->pc = 0x11EBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EBA8u;
    // 0x11ebac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE60u, 0x11EBA8u, 0x11EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBB0u;
label_11ebb0:
    // 0x11ebb0: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x11ebb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebb4: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x11ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x11ebb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ebb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ebbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebc0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x11ebc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ebc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ebc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ebc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebcc: 0xc047b40  jal         func_11ED00
    ctx->pc = 0x11EBCCu;
    SET_GPR_U32(ctx, 31, 0x11EBD4u);
    ctx->pc = 0x11EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EBCCu;
    // 0x11ebd0: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED00u, 0x11EBCCu, 0x11EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBD4u;
label_11ebd4:
    // 0x11ebd4: 0x14313c  dsll32      $a2, $s4, 4
    ctx->pc = 0x11ebd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) << (32 + 4));
    // 0x11ebd8: 0x26a40050  addiu       $a0, $s5, 0x50
    ctx->pc = 0x11ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x11ebdc: 0x6313e  dsrl32      $a2, $a2, 4
    ctx->pc = 0x11ebdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 4));
    // 0x11ebe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ebe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ebe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebe8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x11ebe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ebec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ebecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebf0: 0xc047b24  jal         func_11EC90
    ctx->pc = 0x11EBF0u;
    SET_GPR_U32(ctx, 31, 0x11EBF8u);
    ctx->pc = 0x11EBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EBF0u;
    // 0x11ebf4: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC90u, 0x11EBF0u, 0x11EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBF8u;
label_11ebf8:
    // 0x11ebf8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x11ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x11ebfc: 0xaea00058  sw          $zero, 0x58($s5)
    ctx->pc = 0x11ebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 0));
    // 0x11ec00: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x11ec00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x11ec04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11ec04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11ec08: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x11ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x11ec0c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x11ec0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x11ec10: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x11ec10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11ec14: 0xaea3005c  sw          $v1, 0x5C($s5)
    ctx->pc = 0x11ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 3));
    // 0x11ec18: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x11ec18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x11ec1c: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x11EC1Cu;
    {
        const bool branch_taken_0x11ec1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC1Cu;
        // 0x11ec20: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec1c) {
            ctx->pc = 0x11EB04u;
            return;
        }
    }
    ctx->pc = 0x11EC24u;
}
