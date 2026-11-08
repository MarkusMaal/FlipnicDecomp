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

// Function: entry_001c8c74
// Address: 0x1c8c74 - 0x1c8d2c
void entry_001c8c74_0x1c8c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8c74_0x1c8c74");
#endif

    switch (ctx->pc) {
        case 0x1c8c7cu: goto label_1c8c7c;
        case 0x1c8cc4u: goto label_1c8cc4;
        case 0x1c8cecu: goto label_1c8cec;
        default: break;
    }

    ctx->pc = 0x1c8c74u;

    // 0x1c8c74: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C8C74u;
    SET_GPR_U32(ctx, 31, 0x1C8C7Cu);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C8C74u, 0x1C8C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C7Cu;
label_1c8c7c:
    // 0x1c8c7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8c80: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1c8c80u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1c8c84: 0x8c22f8b0  lw          $v0, -0x750($at)
    ctx->pc = 0x1c8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F8B0u));
    // 0x1c8c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c8c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c8c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c8c90: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1c8c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c8c94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c98: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1c8c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8c9c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ca0: 0x254af8b8  addiu       $t2, $t2, -0x748
    ctx->pc = 0x1c8ca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965432));
    // 0x1c8ca4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c8ca4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ca8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1c8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1c8cac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8cb0: 0x8c22f8b8  lw          $v0, -0x748($at)
    ctx->pc = 0x1c8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8cb4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c8cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c8cb8: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1c8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c8cbc: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C8CBCu;
    SET_GPR_U32(ctx, 31, 0x1C8CC4u);
    ctx->pc = 0x1C8CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8CBCu;
    // 0x1c8cc0: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C8CBCu, 0x1C8CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8CC4u;
label_1c8cc4:
    // 0x1c8cc4: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1c8cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1c8cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ccc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c8cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c8cd0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c8cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c8cd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8cd8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1c8cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8cdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c8cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ce0: 0x254af8b0  addiu       $t2, $t2, -0x750
    ctx->pc = 0x1c8ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965424));
    // 0x1c8ce4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C8CE4u;
    SET_GPR_U32(ctx, 31, 0x1C8CECu);
    ctx->pc = 0x1C8CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8CE4u;
    // 0x1c8ce8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C8CE4u, 0x1C8CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8CECu;
label_1c8cec:
    // 0x1c8cec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8cf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8cf4: 0x8c23f8b0  lw          $v1, -0x750($at)
    ctx->pc = 0x1c8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B0u));
    // 0x1c8cf8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C8CF8u;
    {
        const bool branch_taken_0x1c8cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8cf8) {
            ctx->pc = 0x1C8D2Cu;
            return;
        }
    }
    ctx->pc = 0x1C8D00u;
    // 0x1c8d00: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8d08: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c8d08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8d0c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8D0Cu;
    {
        const bool branch_taken_0x1c8d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8d0c) {
            ctx->pc = 0x1C8D2Cu;
            return;
        }
    }
    ctx->pc = 0x1C8D14u;
    // 0x1c8d14: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1c8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c8d18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8d1c: 0xac22f8b0  sw          $v0, -0x750($at)
    ctx->pc = 0x1c8d1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F8B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8B0u, _value); } while (0);
    // 0x1c8d20: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1c8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c8d24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8d28: 0xac22f8b8  sw          $v0, -0x748($at)
    ctx->pc = 0x1c8d28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F8B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8B8u, _value); } while (0);
    ctx->pc = 0x1c8d2cu;
}
