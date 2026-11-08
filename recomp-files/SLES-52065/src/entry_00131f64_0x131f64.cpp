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

// Function: entry_00131f64
// Address: 0x131f64 - 0x131fb4
void entry_00131f64_0x131f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131f64_0x131f64");
#endif

    switch (ctx->pc) {
        case 0x131f6cu: goto label_131f6c;
        case 0x131f78u: goto label_131f78;
        case 0x131f84u: goto label_131f84;
        case 0x131f90u: goto label_131f90;
        default: break;
    }

    ctx->pc = 0x131f64u;

    // 0x131f64: 0xc04c554  jal         func_131550
    ctx->pc = 0x131F64u;
    SET_GPR_U32(ctx, 31, 0x131F6Cu);
    ctx->pc = 0x131F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F64u;
    // 0x131f68: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x131F64u, 0x131F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F6Cu;
label_131f6c:
    // 0x131f6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f70: 0xc04c550  jal         func_131540
    ctx->pc = 0x131F70u;
    SET_GPR_U32(ctx, 31, 0x131F78u);
    ctx->pc = 0x131F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F70u;
    // 0x131f74: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x131F70u, 0x131F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F78u;
label_131f78:
    // 0x131f78: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x131f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x131f7c: 0xc04c554  jal         func_131550
    ctx->pc = 0x131F7Cu;
    SET_GPR_U32(ctx, 31, 0x131F84u);
    ctx->pc = 0x131F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F7Cu;
    // 0x131f80: 0x8fb00050  lw          $s0, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x131F7Cu, 0x131F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F84u;
label_131f84:
    // 0x131f84: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x131f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131f88: 0xc04c54c  jal         func_131530
    ctx->pc = 0x131F88u;
    SET_GPR_U32(ctx, 31, 0x131F90u);
    ctx->pc = 0x131F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F88u;
    // 0x131f8c: 0x27a40054  addiu       $a0, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x131F88u, 0x131F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F90u;
label_131f90:
    // 0x131f90: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x131f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x131f94: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x131f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x131f98: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x131f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x131f9c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x131f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x131fa0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x131fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131fa4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x131fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x131fa8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x131fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x131fac: 0x10700038  beq         $v1, $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x131FACu;
    {
        const bool branch_taken_0x131fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x131fac) {
            ctx->pc = 0x132090u;
            return;
        }
    }
    ctx->pc = 0x131FB4u;
}
