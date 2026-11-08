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

// Function: entry_001ce0e8
// Address: 0x1ce0e8 - 0x1ce154
void entry_001ce0e8_0x1ce0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce0e8_0x1ce0e8");
#endif

    switch (ctx->pc) {
        case 0x1ce108u: goto label_1ce108;
        case 0x1ce11cu: goto label_1ce11c;
        case 0x1ce12cu: goto label_1ce12c;
        default: break;
    }

    ctx->pc = 0x1ce0e8u;

    // 0x1ce0e8: 0x92a3006c  lbu         $v1, 0x6C($s5)
    ctx->pc = 0x1ce0e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1ce0ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce0f0: 0x1462009d  bne         $v1, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x1CE0F0u;
    {
        const bool branch_taken_0x1ce0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0F0u;
        // 0x1ce0f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0f0) {
            ctx->pc = 0x1CE368u;
            return;
        }
    }
    ctx->pc = 0x1CE0F8u;
    // 0x1ce0f8: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x1ce0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1ce0fc: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1ce0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1ce100: 0xc0743f4  jal         func_1D0FD0
    ctx->pc = 0x1CE100u;
    SET_GPR_U32(ctx, 31, 0x1CE108u);
    ctx->pc = 0x1CE104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE100u;
    // 0x1ce104: 0x26102ec0  addiu       $s0, $s0, 0x2EC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0FD0u, 0x1CE100u, 0x1CE108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE108u;
label_1ce108:
    // 0x1ce108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ce108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce10c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ce10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ce110: 0x2484faa0  addiu       $a0, $a0, -0x560
    ctx->pc = 0x1ce110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965920));
    // 0x1ce114: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1CE114u;
    SET_GPR_U32(ctx, 31, 0x1CE11Cu);
    ctx->pc = 0x1CE118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE114u;
    // 0x1ce118: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1CE114u, 0x1CE11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE11Cu;
label_1ce11c:
    // 0x1ce11c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ce11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ce120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ce120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce124: 0xc080702  jal         func_201C08
    ctx->pc = 0x1CE124u;
    SET_GPR_U32(ctx, 31, 0x1CE12Cu);
    ctx->pc = 0x1CE128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE124u;
    // 0x1ce128: 0x2484faa0  addiu       $a0, $a0, -0x560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1CE124u, 0x1CE12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE12Cu;
label_1ce12c:
    // 0x1ce12c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce130: 0x8022fac8  lb          $v0, -0x538($at)
    ctx->pc = 0x1ce130u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FAC8u));
    // 0x1ce134: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE134u;
    {
        const bool branch_taken_0x1ce134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce134) {
            ctx->pc = 0x1CE154u;
            return;
        }
    }
    ctx->pc = 0x1CE13Cu;
    // 0x1ce13c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1ce13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1ce140: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce144: 0xac23fac0  sw          $v1, -0x540($at)
    ctx->pc = 0x1ce144u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FAC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FAC0u, _value); } while (0);
    // 0x1ce148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce14c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce150: 0xa022fac8  sb          $v0, -0x538($at)
    ctx->pc = 0x1ce150u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FAC8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FAC8u, _value); } while (0);
    ctx->pc = 0x1ce154u;
}
