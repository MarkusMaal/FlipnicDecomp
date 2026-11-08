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

// Function: entry_0013144c
// Address: 0x13144c - 0x131494
void entry_0013144c_0x13144c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013144c_0x13144c");
#endif

    switch (ctx->pc) {
        case 0x131458u: goto label_131458;
        case 0x131464u: goto label_131464;
        case 0x131470u: goto label_131470;
        default: break;
    }

    ctx->pc = 0x13144cu;

    // 0x13144c: 0x0  nop
    ctx->pc = 0x13144cu;
    // NOP
    // 0x131450: 0xc04c554  jal         func_131550
    ctx->pc = 0x131450u;
    SET_GPR_U32(ctx, 31, 0x131458u);
    ctx->pc = 0x131454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131450u;
    // 0x131454: 0x26640058  addiu       $a0, $s3, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x131450u, 0x131458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131458u;
label_131458:
    // 0x131458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13145c: 0xc04c550  jal         func_131540
    ctx->pc = 0x13145Cu;
    SET_GPR_U32(ctx, 31, 0x131464u);
    ctx->pc = 0x131460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13145Cu;
    // 0x131460: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x13145Cu, 0x131464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131464u;
label_131464:
    // 0x131464: 0x8fb0005c  lw          $s0, 0x5C($sp)
    ctx->pc = 0x131464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x131468: 0xc04c4e8  jal         func_1313A0
    ctx->pc = 0x131468u;
    SET_GPR_U32(ctx, 31, 0x131470u);
    ctx->pc = 0x13146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131468u;
    // 0x13146c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313A0u, 0x131468u, 0x131470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131470u;
label_131470:
    // 0x131470: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x131470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131474: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x131474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x131478: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x131478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x13147c: 0x27a20054  addiu       $v0, $sp, 0x54
    ctx->pc = 0x13147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x131480: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x131480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131484: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x131484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x131488: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x131488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x13148c: 0x1450ffe7  bne         $v0, $s0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x13148Cu;
    {
        const bool branch_taken_0x13148c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x13148c) {
            ctx->pc = 0x13142Cu;
            return;
        }
    }
    ctx->pc = 0x131494u;
}
