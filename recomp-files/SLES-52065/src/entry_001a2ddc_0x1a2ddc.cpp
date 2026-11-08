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

// Function: entry_001a2ddc
// Address: 0x1a2ddc - 0x1a2e64
void entry_001a2ddc_0x1a2ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2ddc_0x1a2ddc");
#endif

    switch (ctx->pc) {
        case 0x1a2decu: goto label_1a2dec;
        case 0x1a2e04u: goto label_1a2e04;
        case 0x1a2e1cu: goto label_1a2e1c;
        case 0x1a2e34u: goto label_1a2e34;
        default: break;
    }

    ctx->pc = 0x1a2ddcu;

    // 0x1a2ddc: 0x8cc5003c  lw          $a1, 0x3C($a2)
    ctx->pc = 0x1a2ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1a2de0: 0x8cc6002c  lw          $a2, 0x2C($a2)
    ctx->pc = 0x1a2de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1a2de4: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A2DE4u;
    SET_GPR_U32(ctx, 31, 0x1A2DECu);
    ctx->pc = 0x1A2DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2DE4u;
    // 0x1a2de8: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A2DE4u, 0x1A2DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DECu;
label_1a2dec:
    // 0x1a2dec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a2decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2df0: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x1a2df4: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x1a2df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1a2df8: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a2dfc: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A2DFCu;
    SET_GPR_U32(ctx, 31, 0x1A2E04u);
    ctx->pc = 0x1A2E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2DFCu;
    // 0x1a2e00: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A2DFCu, 0x1A2E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E04u;
label_1a2e04:
    // 0x1a2e04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e08: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x1a2e0c: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1a2e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a2e10: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a2e14: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A2E14u;
    SET_GPR_U32(ctx, 31, 0x1A2E1Cu);
    ctx->pc = 0x1A2E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E14u;
    // 0x1a2e18: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A2E14u, 0x1A2E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E1Cu;
label_1a2e1c:
    // 0x1a2e1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a2e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e20: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x1a2e24: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1a2e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a2e28: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a2e2c: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A2E2Cu;
    SET_GPR_U32(ctx, 31, 0x1A2E34u);
    ctx->pc = 0x1A2E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E2Cu;
    // 0x1a2e30: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A2E2Cu, 0x1A2E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E34u;
label_1a2e34:
    // 0x1a2e34: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1a2e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1a2e38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a2e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e3c: 0xac3076c4  sw          $s0, 0x76C4($at)
    ctx->pc = 0x1a2e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3676C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3676C4u, _value); } while (0);
    // 0x1a2e40: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1a2e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1a2e44: 0xac3276c8  sw          $s2, 0x76C8($at)
    ctx->pc = 0x1a2e44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3676C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3676C8u, _value); } while (0);
    // 0x1a2e48: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1a2e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1a2e4c: 0xac3476cc  sw          $s4, 0x76CC($at)
    ctx->pc = 0x1a2e4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x3676CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3676CCu, _value); } while (0);
    // 0x1a2e50: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1a2e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1a2e54: 0xac2276c0  sw          $v0, 0x76C0($at)
    ctx->pc = 0x1a2e54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3676C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3676C0u, _value); } while (0);
    // 0x1a2e58: 0x8e630664  lw          $v1, 0x664($s3)
    ctx->pc = 0x1a2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x1a2e5c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1A2E5Cu;
    {
        const bool branch_taken_0x1a2e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E5Cu;
        // 0x1a2e60: 0x24700040  addiu       $s0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e5c) {
            ctx->pc = 0x1A2F30u;
            return;
        }
    }
    ctx->pc = 0x1A2E64u;
}
