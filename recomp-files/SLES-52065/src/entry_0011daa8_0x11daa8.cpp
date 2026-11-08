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

// Function: entry_0011daa8
// Address: 0x11daa8 - 0x11db94
void entry_0011daa8_0x11daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011daa8_0x11daa8");
#endif

    switch (ctx->pc) {
        case 0x11dac4u: goto label_11dac4;
        case 0x11dad0u: goto label_11dad0;
        case 0x11dad8u: goto label_11dad8;
        case 0x11dae4u: goto label_11dae4;
        case 0x11dafcu: goto label_11dafc;
        case 0x11db14u: goto label_11db14;
        case 0x11db3cu: goto label_11db3c;
        case 0x11db44u: goto label_11db44;
        case 0x11db4cu: goto label_11db4c;
        case 0x11db8cu: goto label_11db8c;
        default: break;
    }

    ctx->pc = 0x11daa8u;

    // 0x11daa8: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x11daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x11daac: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x11daacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x11dab0: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x11dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x11dab4: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x11dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x11dab8: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x11dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x11dabc: 0xc047bac  jal         func_11EEB0
    ctx->pc = 0x11DABCu;
    SET_GPR_U32(ctx, 31, 0x11DAC4u);
    ctx->pc = 0x11DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DABCu;
    // 0x11dac0: 0xae4000ac  sw          $zero, 0xAC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EEB0u, 0x11DABCu, 0x11DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAC4u;
label_11dac4:
    // 0x11dac4: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x11dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x11dac8: 0xc047bd4  jal         func_11EF50
    ctx->pc = 0x11DAC8u;
    SET_GPR_U32(ctx, 31, 0x11DAD0u);
    ctx->pc = 0x11DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DAC8u;
    // 0x11dacc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EF50u, 0x11DAC8u, 0x11DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAD0u;
label_11dad0:
    // 0x11dad0: 0xc047be8  jal         func_11EFA0
    ctx->pc = 0x11DAD0u;
    SET_GPR_U32(ctx, 31, 0x11DAD8u);
    ctx->pc = 0x11DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DAD0u;
    // 0x11dad4: 0x26440424  addiu       $a0, $s2, 0x424 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1060));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFA0u, 0x11DAD0u, 0x11DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAD8u;
label_11dad8:
    // 0x11dad8: 0x26440424  addiu       $a0, $s2, 0x424
    ctx->pc = 0x11dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1060));
    // 0x11dadc: 0xc047cac  jal         func_11F2B0
    ctx->pc = 0x11DADCu;
    SET_GPR_U32(ctx, 31, 0x11DAE4u);
    ctx->pc = 0x11DAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DADCu;
    // 0x11dae0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F2B0u, 0x11DADCu, 0x11DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAE4u;
label_11dae4:
    // 0x11dae4: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11dae4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11dae8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x11dae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11daec: 0x26440424  addiu       $a0, $s2, 0x424
    ctx->pc = 0x11daecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1060));
    // 0x11daf0: 0x24c6a2f0  addiu       $a2, $a2, -0x5D10
    ctx->pc = 0x11daf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943472));
    // 0x11daf4: 0xc047ca4  jal         func_11F290
    ctx->pc = 0x11DAF4u;
    SET_GPR_U32(ctx, 31, 0x11DAFCu);
    ctx->pc = 0x11DAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DAF4u;
    // 0x11daf8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F290u, 0x11DAF4u, 0x11DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAFCu;
label_11dafc:
    // 0x11dafc: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x11dafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x11db00: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11db00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11db04: 0x26440424  addiu       $a0, $s2, 0x424
    ctx->pc = 0x11db04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1060));
    // 0x11db08: 0x24c6a410  addiu       $a2, $a2, -0x5BF0
    ctx->pc = 0x11db08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943760));
    // 0x11db0c: 0xc047ca4  jal         func_11F290
    ctx->pc = 0x11DB0Cu;
    SET_GPR_U32(ctx, 31, 0x11DB14u);
    ctx->pc = 0x11DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB0Cu;
    // 0x11db10: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F290u, 0x11DB0Cu, 0x11DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB14u;
label_11db14:
    // 0x11db14: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x11db14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
    // 0x11db18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11db18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db1c: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x11db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
    // 0x11db20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11db20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db24: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x11db24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    // 0x11db28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11db28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db2c: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x11db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    // 0x11db30: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x11db30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x11db34: 0xc047744  jal         func_11DD10
    ctx->pc = 0x11DB34u;
    SET_GPR_U32(ctx, 31, 0x11DB3Cu);
    ctx->pc = 0x11DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB34u;
    // 0x11db38: 0xae4000c4  sw          $zero, 0xC4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD10u, 0x11DB34u, 0x11DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB3Cu;
label_11db3c:
    // 0x11db3c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x11DB3Cu;
    SET_GPR_U32(ctx, 31, 0x11DB44u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x11DB3Cu, 0x11DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB44u;
label_11db44:
    // 0x11db44: 0xc062990  jal         func_18A640
    ctx->pc = 0x11DB44u;
    SET_GPR_U32(ctx, 31, 0x11DB4Cu);
    ctx->pc = 0x11DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB44u;
    // 0x11db48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A640u, 0x11DB44u, 0x11DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB4Cu;
label_11db4c:
    // 0x11db4c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x11db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11db50: 0x3c038102  lui         $v1, 0x8102
    ctx->pc = 0x11db50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33026 << 16));
    // 0x11db54: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x11db54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11db58: 0x34620409  ori         $v0, $v1, 0x409
    ctx->pc = 0x11db58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1033);
    // 0x11db5c: 0x26440108  addiu       $a0, $s2, 0x108
    ctx->pc = 0x11db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x11db60: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11db60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11db64: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x11db64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11db68: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x11db68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11db6c: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x11db6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11db70: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x11db70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x11db74: 0x0  nop
    ctx->pc = 0x11db74u;
    // NOP
    // 0x11db78: 0x1010  mfhi        $v0
    ctx->pc = 0x11db78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x11db7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11db80: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x11db80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x11db84: 0xc074fc2  jal         func_1D3F08
    ctx->pc = 0x11DB84u;
    SET_GPR_U32(ctx, 31, 0x11DB8Cu);
    ctx->pc = 0x11DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB84u;
    // 0x11db88: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3F08u, 0x11DB84u, 0x11DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB8Cu;
label_11db8c:
    // 0x11db8c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x11DB8Cu;
    {
        const bool branch_taken_0x11db8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11db8c) {
            ctx->pc = 0x11DC28u;
            return;
        }
    }
    ctx->pc = 0x11DB94u;
}
