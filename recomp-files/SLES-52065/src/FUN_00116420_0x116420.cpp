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

// Function: FUN_00116420
// Address: 0x116420 - 0x1164ac
void FUN_00116420_0x116420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00116420_0x116420");
#endif

    switch (ctx->pc) {
        case 0x116420u: goto label_116420;
        case 0x116424u: goto label_116424;
        case 0x116428u: goto label_116428;
        case 0x11642cu: goto label_11642c;
        case 0x116430u: goto label_116430;
        case 0x116434u: goto label_116434;
        case 0x116438u: goto label_116438;
        case 0x11643cu: goto label_11643c;
        case 0x116440u: goto label_116440;
        case 0x116444u: goto label_116444;
        case 0x116448u: goto label_116448;
        case 0x11644cu: goto label_11644c;
        case 0x116450u: goto label_116450;
        case 0x116454u: goto label_116454;
        case 0x116458u: goto label_116458;
        case 0x11645cu: goto label_11645c;
        case 0x116460u: goto label_116460;
        case 0x116464u: goto label_116464;
        case 0x116468u: goto label_116468;
        case 0x11646cu: goto label_11646c;
        case 0x116470u: goto label_116470;
        case 0x116474u: goto label_116474;
        case 0x116478u: goto label_116478;
        case 0x11647cu: goto label_11647c;
        case 0x116480u: goto label_116480;
        case 0x116484u: goto label_116484;
        case 0x116488u: goto label_116488;
        case 0x11648cu: goto label_11648c;
        case 0x116490u: goto label_116490;
        case 0x116494u: goto label_116494;
        case 0x116498u: goto label_116498;
        case 0x11649cu: goto label_11649c;
        case 0x1164a0u: goto label_1164a0;
        case 0x1164a4u: goto label_1164a4;
        case 0x1164a8u: goto label_1164a8;
        default: break;
    }

    ctx->pc = 0x116420u;

label_116420:
    // 0x116420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x116420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_116424:
    // 0x116424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_116428:
    // 0x116428: 0xc04b7b4  jal         func_12DED0
label_11642c:
    if (ctx->pc == 0x11642Cu) {
        ctx->pc = 0x116430u;
        goto label_116430;
    }
    ctx->pc = 0x116428u;
    SET_GPR_U32(ctx, 31, 0x116430u);
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x116428u, 0x116430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116430u;
label_116430:
    // 0x116430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x116430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116434:
    // 0x116434: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x116434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_116438:
    // 0x116438: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x116438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11643c:
    // 0x11643c: 0xc04b7dc  jal         func_12DF70
label_116440:
    if (ctx->pc == 0x116440u) {
        ctx->pc = 0x116440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11643Cu;
        // 0x116440: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116444u;
        goto label_116444;
    }
    ctx->pc = 0x11643Cu;
    SET_GPR_U32(ctx, 31, 0x116444u);
    ctx->pc = 0x116440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11643Cu;
    // 0x116440: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x11643Cu, 0x116444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116444u;
label_116444:
    // 0x116444: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x116444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_116448:
    // 0x116448: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x116448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11644c:
    // 0x11644c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x11644cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_116450:
    // 0x116450: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x116450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_116454:
    // 0x116454: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x116454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_116458:
    // 0x116458: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x116458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11645c:
    // 0x11645c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x11645cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_116460:
    // 0x116460: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x116460u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_116464:
    // 0x116464: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x116464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_116468:
    // 0x116468: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x116468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_11646c:
    // 0x11646c: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x11646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_116470:
    // 0x116470: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x116470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_116474:
    // 0x116474: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x116474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_116478:
    // 0x116478: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x116478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11647c:
    // 0x11647c: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x11647cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_116480:
    // 0x116480: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x116480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_116484:
    // 0x116484: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x116484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_116488:
    // 0x116488: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x116488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_11648c:
    // 0x11648c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x11648cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_116490:
    // 0x116490: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x116490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_116494:
    // 0x116494: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x116494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_116498:
    // 0x116498: 0x320f809  jalr        $t9
label_11649c:
    if (ctx->pc == 0x11649Cu) {
        ctx->pc = 0x1164A0u;
        goto label_1164a0;
    }
    ctx->pc = 0x116498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1164A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116498u, 0x1164A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1164A0u;
label_1164a0:
    // 0x1164a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1164a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1164a4:
    // 0x1164a4: 0x3e00008  jr          $ra
label_1164a8:
    if (ctx->pc == 0x1164A8u) {
        ctx->pc = 0x1164A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164A4u;
        // 0x1164a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1164ACu;
        goto label_fallthrough_0x1164a4;
    }
    ctx->pc = 0x1164A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1164A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164A4u;
        // 0x1164a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1164A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1164a4:
    ctx->pc = 0x1164ACu;
}
