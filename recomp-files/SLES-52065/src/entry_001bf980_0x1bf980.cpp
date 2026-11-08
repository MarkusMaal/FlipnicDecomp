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

// Function: entry_001bf980
// Address: 0x1bf980 - 0x1bfa68
void entry_001bf980_0x1bf980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf980_0x1bf980");
#endif

    switch (ctx->pc) {
        case 0x1bf998u: goto label_1bf998;
        case 0x1bf9b0u: goto label_1bf9b0;
        case 0x1bf9b8u: goto label_1bf9b8;
        case 0x1bfa00u: goto label_1bfa00;
        case 0x1bfa28u: goto label_1bfa28;
        default: break;
    }

    ctx->pc = 0x1bf980u;

    // 0x1bf980: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf984: 0x8c25f4f0  lw          $a1, -0xB10($at)
    ctx->pc = 0x1bf984u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36F4F0u));
    // 0x1bf988: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf98c: 0x8c26f4f8  lw          $a2, -0xB08($at)
    ctx->pc = 0x1bf98cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bf990: 0xc06ffb0  jal         func_1BFEC0
    ctx->pc = 0x1BF990u;
    SET_GPR_U32(ctx, 31, 0x1BF998u);
    ctx->pc = 0x1BF994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF990u;
    // 0x1bf994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFEC0u, 0x1BF990u, 0x1BF998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF998u;
label_1bf998:
    // 0x1bf998: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bf998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf99c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1bf99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1bf9a0: 0x24421430  addiu       $v0, $v0, 0x1430
    ctx->pc = 0x1bf9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5168));
    // 0x1bf9a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf9a8: 0xc073080  jal         func_1CC200
    ctx->pc = 0x1BF9A8u;
    SET_GPR_U32(ctx, 31, 0x1BF9B0u);
    ctx->pc = 0x1BF9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF9A8u;
    // 0x1bf9ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC200u, 0x1BF9A8u, 0x1BF9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF9B0u;
label_1bf9b0:
    // 0x1bf9b0: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1BF9B0u;
    SET_GPR_U32(ctx, 31, 0x1BF9B8u);
    ctx->pc = 0x1BF9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF9B0u;
    // 0x1bf9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1BF9B0u, 0x1BF9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF9B8u;
label_1bf9b8:
    // 0x1bf9b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf9bc: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1bf9bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1bf9c0: 0x8c22f4f0  lw          $v0, -0xB10($at)
    ctx->pc = 0x1bf9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F4F0u));
    // 0x1bf9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9c8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1bf9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bf9cc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1bf9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bf9d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf9d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9d4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1bf9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf9d8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1bf9d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf9dc: 0x254af4f8  addiu       $t2, $t2, -0xB08
    ctx->pc = 0x1bf9dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294964472));
    // 0x1bf9e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bf9e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9e4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1bf9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1bf9e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf9ec: 0x8c22f4f8  lw          $v0, -0xB08($at)
    ctx->pc = 0x1bf9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bf9f0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1bf9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1bf9f4: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1bf9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1bf9f8: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1BF9F8u;
    SET_GPR_U32(ctx, 31, 0x1BFA00u);
    ctx->pc = 0x1BF9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF9F8u;
    // 0x1bf9fc: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1BF9F8u, 0x1BFA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA00u;
label_1bfa00:
    // 0x1bfa00: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1bfa00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa08: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1bfa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bfa0c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1bfa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bfa10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bfa10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa14: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1bfa14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfa18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bfa18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa1c: 0x254af4f0  addiu       $t2, $t2, -0xB10
    ctx->pc = 0x1bfa1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294964464));
    // 0x1bfa20: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1BFA20u;
    SET_GPR_U32(ctx, 31, 0x1BFA28u);
    ctx->pc = 0x1BFA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA20u;
    // 0x1bfa24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1BFA20u, 0x1BFA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA28u;
label_1bfa28:
    // 0x1bfa28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bfa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfa30: 0x8c23f4f0  lw          $v1, -0xB10($at)
    ctx->pc = 0x1bfa30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4F0u));
    // 0x1bfa34: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BFA34u;
    {
        const bool branch_taken_0x1bfa34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bfa34) {
            ctx->pc = 0x1BFA68u;
            return;
        }
    }
    ctx->pc = 0x1BFA3Cu;
    // 0x1bfa3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bfa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfa44: 0x8c23f4f8  lw          $v1, -0xB08($at)
    ctx->pc = 0x1bfa44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bfa48: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFA48u;
    {
        const bool branch_taken_0x1bfa48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bfa48) {
            ctx->pc = 0x1BFA68u;
            return;
        }
    }
    ctx->pc = 0x1BFA50u;
    // 0x1bfa50: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1bfa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1bfa54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa58: 0xac22f4f0  sw          $v0, -0xB10($at)
    ctx->pc = 0x1bfa58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F4F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4F0u, _value); } while (0);
    // 0x1bfa5c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1bfa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1bfa60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa64: 0xac22f4f8  sw          $v0, -0xB08($at)
    ctx->pc = 0x1bfa64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F4F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4F8u, _value); } while (0);
    ctx->pc = 0x1bfa68u;
}
