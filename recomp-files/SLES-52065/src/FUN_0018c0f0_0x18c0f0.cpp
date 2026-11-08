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

// Function: FUN_0018c0f0
// Address: 0x18c0f0 - 0x18c158
void FUN_0018c0f0_0x18c0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c0f0_0x18c0f0");
#endif

    ctx->pc = 0x18c0f0u;

    // 0x18c0f0: 0x8c820540  lw          $v0, 0x540($a0)
    ctx->pc = 0x18c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1344)));
    // 0x18c0f4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x18C0F4u;
    {
        const bool branch_taken_0x18c0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0F4u;
        // 0x18c0f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0f4) {
            ctx->pc = 0x18C150u;
            goto label_18c150;
        }
    }
    ctx->pc = 0x18C0FCu;
    // 0x18c0fc: 0xc48104d0  lwc1        $f1, 0x4D0($a0)
    ctx->pc = 0x18c0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c100: 0xc4800550  lwc1        $f0, 0x550($a0)
    ctx->pc = 0x18c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c104: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c108: 0xe48004d0  swc1        $f0, 0x4D0($a0)
    ctx->pc = 0x18c108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1232), bits); }
    // 0x18c10c: 0xc48104d4  lwc1        $f1, 0x4D4($a0)
    ctx->pc = 0x18c10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c110: 0xc4800554  lwc1        $f0, 0x554($a0)
    ctx->pc = 0x18c110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c114: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c118: 0xe48004d4  swc1        $f0, 0x4D4($a0)
    ctx->pc = 0x18c118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1236), bits); }
    // 0x18c11c: 0xc48104d8  lwc1        $f1, 0x4D8($a0)
    ctx->pc = 0x18c11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c120: 0xc4800558  lwc1        $f0, 0x558($a0)
    ctx->pc = 0x18c120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c124: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c128: 0xe48004d8  swc1        $f0, 0x4D8($a0)
    ctx->pc = 0x18c128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1240), bits); }
    // 0x18c12c: 0x8c820540  lw          $v0, 0x540($a0)
    ctx->pc = 0x18c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1344)));
    // 0x18c130: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18c130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18c134: 0xac820540  sw          $v0, 0x540($a0)
    ctx->pc = 0x18c134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1344), GPR_U32(ctx, 2));
    // 0x18c138: 0x8c820540  lw          $v0, 0x540($a0)
    ctx->pc = 0x18c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1344)));
    // 0x18c13c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C13Cu;
    {
        const bool branch_taken_0x18c13c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C13Cu;
        // 0x18c140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c13c) {
            ctx->pc = 0x18C14Cu;
            goto label_18c14c;
        }
    }
    ctx->pc = 0x18C144u;
    // 0x18c144: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18C144u;
    {
        const bool branch_taken_0x18c144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c144) {
            ctx->pc = 0x18C150u;
            goto label_18c150;
        }
    }
    ctx->pc = 0x18C14Cu;
label_18c14c:
    // 0x18c14c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18c14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c150:
    // 0x18c150: 0x3e00008  jr          $ra
    ctx->pc = 0x18C150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C158u;
}
