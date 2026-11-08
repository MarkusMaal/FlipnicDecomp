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

// Function: entry_0013ca0c
// Address: 0x13ca0c - 0x13ca60
void entry_0013ca0c_0x13ca0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ca0c_0x13ca0c");
#endif

    switch (ctx->pc) {
        case 0x13ca14u: goto label_13ca14;
        case 0x13ca20u: goto label_13ca20;
        case 0x13ca38u: goto label_13ca38;
        case 0x13ca44u: goto label_13ca44;
        default: break;
    }

    ctx->pc = 0x13ca0cu;

    // 0x13ca0c: 0xc04c554  jal         func_131550
    ctx->pc = 0x13CA0Cu;
    SET_GPR_U32(ctx, 31, 0x13CA14u);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13CA0Cu, 0x13CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA14u;
label_13ca14:
    // 0x13ca14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13ca14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca18: 0xc04c550  jal         func_131540
    ctx->pc = 0x13CA18u;
    SET_GPR_U32(ctx, 31, 0x13CA20u);
    ctx->pc = 0x13CA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA18u;
    // 0x13ca1c: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x13CA18u, 0x13CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA20u;
label_13ca20:
    // 0x13ca20: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x13ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13ca24: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x13ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x13ca28: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x13ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x13ca2c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x13ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13ca30: 0xc04c554  jal         func_131550
    ctx->pc = 0x13CA30u;
    SET_GPR_U32(ctx, 31, 0x13CA38u);
    ctx->pc = 0x13CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA30u;
    // 0x13ca34: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13CA30u, 0x13CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA38u;
label_13ca38:
    // 0x13ca38: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x13ca38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13ca3c: 0xc04c54c  jal         func_131530
    ctx->pc = 0x13CA3Cu;
    SET_GPR_U32(ctx, 31, 0x13CA44u);
    ctx->pc = 0x13CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA3Cu;
    // 0x13ca40: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x13CA3Cu, 0x13CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA44u;
label_13ca44:
    // 0x13ca44: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x13ca44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x13ca48: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x13ca48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x13ca4c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x13ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13ca50: 0xafa5008c  sw          $a1, 0x8C($sp)
    ctx->pc = 0x13ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 5));
    // 0x13ca54: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x13ca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ca58: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x13CA58u;
    {
        const bool branch_taken_0x13ca58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA58u;
        // 0x13ca5c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca58) {
            ctx->pc = 0x13CAB4u;
            return;
        }
    }
    ctx->pc = 0x13CA60u;
}
