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

// Function: entry_00135328
// Address: 0x135328 - 0x13536c
void entry_00135328_0x135328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135328_0x135328");
#endif

    switch (ctx->pc) {
        case 0x135364u: goto label_135364;
        default: break;
    }

    ctx->pc = 0x135328u;

label_135328:
    // 0x135328: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x135328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13532c:
    // 0x13532c: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x13532cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
label_135330:
    // 0x135330: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x135330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_135334:
    // 0x135334: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x135334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_135338:
    // 0x135338: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x135338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13533c:
    // 0x13533c: 0x0  nop
    ctx->pc = 0x13533cu;
    // NOP
label_135340:
    // 0x135340: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x135340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_135344:
    // 0x135344: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x135344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_135348:
    // 0x135348: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x135348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_13534c:
    // 0x13534c: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x13534cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
label_135350:
    // 0x135350: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x135350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_135354:
    // 0x135354: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135358:
    // 0x135358: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x135358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_13535c:
    // 0x13535c: 0x320f809  jalr        $t9
label_135360:
    if (ctx->pc == 0x135360u) {
        ctx->pc = 0x135360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13535Cu;
        // 0x135360: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135364u;
        goto label_135364;
    }
    ctx->pc = 0x13535Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135364u);
        ctx->pc = 0x135360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13535Cu;
        // 0x135360: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13535Cu, 0x135364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135364u;
label_135364:
    // 0x135364: 0x10000042  b           . + 4 + (0x42 << 2)
label_135368:
    if (ctx->pc == 0x135368u) {
        ctx->pc = 0x13536Cu;
        goto label_fallthrough_0x135364;
    }
    ctx->pc = 0x135364u;
    {
        const bool branch_taken_0x135364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135364) {
            ctx->pc = 0x135470u;
            return;
        }
    }
label_fallthrough_0x135364:
    ctx->pc = 0x13536Cu;
}
