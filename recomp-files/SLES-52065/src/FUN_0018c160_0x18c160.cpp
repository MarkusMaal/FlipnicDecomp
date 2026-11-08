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

// Function: FUN_0018c160
// Address: 0x18c160 - 0x18c1b8
void FUN_0018c160_0x18c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c160_0x18c160");
#endif

    ctx->pc = 0x18c160u;

    // 0x18c160: 0x8c820560  lw          $v0, 0x560($a0)
    ctx->pc = 0x18c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x18c164: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18C164u;
    {
        const bool branch_taken_0x18c164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C164u;
        // 0x18c168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c164) {
            ctx->pc = 0x18C1B0u;
            goto label_18c1b0;
        }
    }
    ctx->pc = 0x18C16Cu;
    // 0x18c16c: 0xc48104e0  lwc1        $f1, 0x4E0($a0)
    ctx->pc = 0x18c16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c170: 0xc4800570  lwc1        $f0, 0x570($a0)
    ctx->pc = 0x18c170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c174: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c178: 0xe48004e0  swc1        $f0, 0x4E0($a0)
    ctx->pc = 0x18c178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1248), bits); }
    // 0x18c17c: 0xc48104e4  lwc1        $f1, 0x4E4($a0)
    ctx->pc = 0x18c17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c180: 0xc4800574  lwc1        $f0, 0x574($a0)
    ctx->pc = 0x18c180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c184: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c188: 0xe48004e4  swc1        $f0, 0x4E4($a0)
    ctx->pc = 0x18c188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1252), bits); }
    // 0x18c18c: 0x8c820560  lw          $v0, 0x560($a0)
    ctx->pc = 0x18c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x18c190: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18c194: 0xac820560  sw          $v0, 0x560($a0)
    ctx->pc = 0x18c194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1376), GPR_U32(ctx, 2));
    // 0x18c198: 0x8c820560  lw          $v0, 0x560($a0)
    ctx->pc = 0x18c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x18c19c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C19Cu;
    {
        const bool branch_taken_0x18c19c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C19Cu;
        // 0x18c1a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c19c) {
            ctx->pc = 0x18C1ACu;
            goto label_18c1ac;
        }
    }
    ctx->pc = 0x18C1A4u;
    // 0x18c1a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18C1A4u;
    {
        const bool branch_taken_0x18c1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c1a4) {
            ctx->pc = 0x18C1B0u;
            goto label_18c1b0;
        }
    }
    ctx->pc = 0x18C1ACu;
label_18c1ac:
    // 0x18c1ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18c1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c1b0:
    // 0x18c1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18C1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C1B8u;
}
