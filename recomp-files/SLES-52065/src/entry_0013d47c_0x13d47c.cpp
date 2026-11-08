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

// Function: entry_0013d47c
// Address: 0x13d47c - 0x13d4cc
void entry_0013d47c_0x13d47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d47c_0x13d47c");
#endif

    switch (ctx->pc) {
        case 0x13d484u: goto label_13d484;
        case 0x13d490u: goto label_13d490;
        case 0x13d4a0u: goto label_13d4a0;
        case 0x13d4acu: goto label_13d4ac;
        default: break;
    }

    ctx->pc = 0x13d47cu;

    // 0x13d47c: 0xc04c554  jal         func_131550
    ctx->pc = 0x13D47Cu;
    SET_GPR_U32(ctx, 31, 0x13D484u);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13D47Cu, 0x13D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D484u;
label_13d484:
    // 0x13d484: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x13d484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13d488: 0xc04c54c  jal         func_131530
    ctx->pc = 0x13D488u;
    SET_GPR_U32(ctx, 31, 0x13D490u);
    ctx->pc = 0x13D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D488u;
    // 0x13d48c: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x13D488u, 0x13D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D490u;
label_13d490:
    // 0x13d490: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13d490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13d494: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x13d494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x13d498: 0xc04c554  jal         func_131550
    ctx->pc = 0x13D498u;
    SET_GPR_U32(ctx, 31, 0x13D4A0u);
    ctx->pc = 0x13D49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D498u;
    // 0x13d49c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13D498u, 0x13D4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4A0u;
label_13d4a0:
    // 0x13d4a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4a4: 0xc04c550  jal         func_131540
    ctx->pc = 0x13D4A4u;
    SET_GPR_U32(ctx, 31, 0x13D4ACu);
    ctx->pc = 0x13D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4A4u;
    // 0x13d4a8: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x13D4A4u, 0x13D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4ACu;
label_13d4ac:
    // 0x13d4ac: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x13d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x13d4b0: 0x8fb0004c  lw          $s0, 0x4C($sp)
    ctx->pc = 0x13d4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x13d4b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13d4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d4b8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x13d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13d4bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13d4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13d4c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d4c4: 0x10500012  beq         $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13D4C4u;
    {
        const bool branch_taken_0x13d4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x13d4c4) {
            ctx->pc = 0x13D510u;
            return;
        }
    }
    ctx->pc = 0x13D4CCu;
}
