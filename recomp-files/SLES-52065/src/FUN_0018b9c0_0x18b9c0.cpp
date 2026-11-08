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

// Function: FUN_0018b9c0
// Address: 0x18b9c0 - 0x18ba14
void FUN_0018b9c0_0x18b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018b9c0_0x18b9c0");
#endif

    switch (ctx->pc) {
        case 0x18b9c0u: goto label_18b9c0;
        case 0x18b9c4u: goto label_18b9c4;
        case 0x18b9c8u: goto label_18b9c8;
        case 0x18b9ccu: goto label_18b9cc;
        case 0x18b9d0u: goto label_18b9d0;
        case 0x18b9d4u: goto label_18b9d4;
        case 0x18b9d8u: goto label_18b9d8;
        case 0x18b9dcu: goto label_18b9dc;
        case 0x18b9e0u: goto label_18b9e0;
        case 0x18b9e4u: goto label_18b9e4;
        case 0x18b9e8u: goto label_18b9e8;
        case 0x18b9ecu: goto label_18b9ec;
        case 0x18b9f0u: goto label_18b9f0;
        case 0x18b9f4u: goto label_18b9f4;
        case 0x18b9f8u: goto label_18b9f8;
        case 0x18b9fcu: goto label_18b9fc;
        case 0x18ba00u: goto label_18ba00;
        case 0x18ba04u: goto label_18ba04;
        case 0x18ba08u: goto label_18ba08;
        case 0x18ba0cu: goto label_18ba0c;
        case 0x18ba10u: goto label_18ba10;
        default: break;
    }

    ctx->pc = 0x18b9c0u;

label_18b9c0:
    // 0x18b9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18b9c4:
    // 0x18b9c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18b9c8:
    // 0x18b9c8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x18b9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18b9cc:
    // 0x18b9cc: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x18b9ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18b9d0:
    // 0x18b9d0: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x18b9d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_18b9d4:
    // 0x18b9d4: 0x320f809  jalr        $t9
label_18b9d8:
    if (ctx->pc == 0x18B9D8u) {
        ctx->pc = 0x18B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9D4u;
        // 0x18b9d8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B9DCu;
        goto label_18b9dc;
    }
    ctx->pc = 0x18B9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18B9DCu);
        ctx->pc = 0x18B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9D4u;
        // 0x18b9d8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B9D4u, 0x18B9DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B9DCu;
label_18b9dc:
    // 0x18b9dc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x18b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18b9e0:
    // 0x18b9e0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18b9e4:
    // 0x18b9e4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x18b9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18b9e8:
    // 0x18b9e8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x18b9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18b9ec:
    // 0x18b9ec: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x18b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18b9f0:
    // 0x18b9f0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x18b9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18b9f4:
    // 0x18b9f4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x18b9f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_18b9f8:
    // 0x18b9f8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x18b9f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_18b9fc:
    // 0x18b9fc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x18b9fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_18ba00:
    // 0x18ba00: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18ba00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_18ba04:
    // 0x18ba04: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x18ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_18ba08:
    // 0x18ba08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ba08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ba0c:
    // 0x18ba0c: 0x3e00008  jr          $ra
label_18ba10:
    if (ctx->pc == 0x18BA10u) {
        ctx->pc = 0x18BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA0Cu;
        // 0x18ba10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA14u;
        goto label_fallthrough_0x18ba0c;
    }
    ctx->pc = 0x18BA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA0Cu;
        // 0x18ba10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18ba0c:
    ctx->pc = 0x18BA14u;
}
