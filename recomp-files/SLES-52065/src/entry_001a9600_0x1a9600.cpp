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

// Function: entry_001a9600
// Address: 0x1a9600 - 0x1a96b8
void entry_001a9600_0x1a9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9600_0x1a9600");
#endif

    switch (ctx->pc) {
        case 0x1a96a0u: goto label_1a96a0;
        case 0x1a96b0u: goto label_1a96b0;
        default: break;
    }

    ctx->pc = 0x1a9600u;

    // 0x1a9600: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A9600u;
    {
        const bool branch_taken_0x1a9600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9600) {
            ctx->pc = 0x1A96B8u;
            return;
        }
    }
    ctx->pc = 0x1A9608u;
    // 0x1a9608: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a9608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a960c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a960cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a9610: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a9610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9614: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x1a9614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1a9618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a961c: 0x24a5e060  addiu       $a1, $a1, -0x1FA0
    ctx->pc = 0x1a961cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959200));
    // 0x1a9620: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9624: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a9624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a9628: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a9628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a962c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a9630: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a9630u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9634: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a9634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a9638: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a9638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a963c: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a963cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a9640: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a9640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a9644: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a9644u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a9648: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a9648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a964c: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a964cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a9650: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a9650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a9654: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a9654u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9658: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a9658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a965c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a965cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a9660: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a9660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a9664: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a9664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a9668: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a9668u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a966c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a966cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a9670: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a9670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a9674: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a9674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a9678: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a9678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a967c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9680: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a9680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9684: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a9684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a9688: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a9688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a968c: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a968cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a9690: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a9690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a9694: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a9694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a9698: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A9698u;
    SET_GPR_U32(ctx, 31, 0x1A96A0u);
    ctx->pc = 0x1A969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9698u;
    // 0x1a969c: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A9698u, 0x1A96A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A96A0u;
label_1a96a0:
    // 0x1a96a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a96a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a96a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96a8: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A96A8u;
    SET_GPR_U32(ctx, 31, 0x1A96B0u);
    ctx->pc = 0x1A96ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A96A8u;
    // 0x1a96ac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A96A8u, 0x1A96B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A96B0u;
label_1a96b0:
    // 0x1a96b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A96B0u;
    {
        const bool branch_taken_0x1a96b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A96B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96B0u;
        // 0x1a96b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a96b0) {
            ctx->pc = 0x1A96C0u;
            return;
        }
    }
    ctx->pc = 0x1A96B8u;
}
