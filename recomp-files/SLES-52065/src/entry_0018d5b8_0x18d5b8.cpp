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

// Function: entry_0018d5b8
// Address: 0x18d5b8 - 0x18d6ac
void entry_0018d5b8_0x18d5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d5b8_0x18d5b8");
#endif

    switch (ctx->pc) {
        case 0x18d5ccu: goto label_18d5cc;
        case 0x18d5dcu: goto label_18d5dc;
        case 0x18d5e8u: goto label_18d5e8;
        case 0x18d61cu: goto label_18d61c;
        default: break;
    }

    ctx->pc = 0x18d5b8u;

    // 0x18d5b8: 0x8e220450  lw          $v0, 0x450($s1)
    ctx->pc = 0x18d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18d5bc: 0xae220458  sw          $v0, 0x458($s1)
    ctx->pc = 0x18d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1112), GPR_U32(ctx, 2));
    // 0x18d5c0: 0x8e22271c  lw          $v0, 0x271C($s1)
    ctx->pc = 0x18d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
    // 0x18d5c4: 0xc062d50  jal         func_18B540
    ctx->pc = 0x18D5C4u;
    SET_GPR_U32(ctx, 31, 0x18D5CCu);
    ctx->pc = 0x18D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5C4u;
    // 0x18d5c8: 0xae220454  sw          $v0, 0x454($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18D5C4u, 0x18D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5CCu;
label_18d5cc:
    // 0x18d5cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5d0: 0x240500e5  addiu       $a1, $zero, 0xE5
    ctx->pc = 0x18d5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x18d5d4: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x18D5D4u;
    SET_GPR_U32(ctx, 31, 0x18D5DCu);
    ctx->pc = 0x18D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5D4u;
    // 0x18d5d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18D5D4u, 0x18D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5DCu;
label_18d5dc:
    // 0x18d5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5e0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18D5E0u;
    SET_GPR_U32(ctx, 31, 0x18D5E8u);
    ctx->pc = 0x18D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5E0u;
    // 0x18d5e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D5E0u, 0x18D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5E8u;
label_18d5e8:
    // 0x18d5e8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18d5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18d5ec: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x18d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x18d5f0: 0x24a528d0  addiu       $a1, $a1, 0x28D0
    ctx->pc = 0x18d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10448));
    // 0x18d5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5f8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18d5f8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x2128D0u));
    // 0x18d5fc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18d5fcu;
    { uint32_t bits = FAST_READ32(0x2128D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d600: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18d600u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x18d604: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18d604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18d608: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18d60c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d610: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18d610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18d614: 0xc063e40  jal         func_18F900
    ctx->pc = 0x18D614u;
    SET_GPR_U32(ctx, 31, 0x18D61Cu);
    ctx->pc = 0x18D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D614u;
    // 0x18d618: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F900u, 0x18D614u, 0x18D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D61Cu;
label_18d61c:
    // 0x18d61c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18d61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18d620: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18d620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d624: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x18d624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18d628: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x18d628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x18d62c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18d62cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18d630: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18d630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18d634: 0xaca60254  sw          $a2, 0x254($a1)
    ctx->pc = 0x18d634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 596), GPR_U32(ctx, 6));
    // 0x18d638: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18d638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18d63c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18d63cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18d640: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18d640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18d644: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18d644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x18d648: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18d648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x18d64c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18d650: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18d650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18d654: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18d654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18d658: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x18d658u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x18d65c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18d660: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18d660u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18d664: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18d664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18d668: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18d668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x18d66c: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18d66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x18d670: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18d674: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18d674u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18d678: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18d678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18d67c: 0xaca00154  sw          $zero, 0x154($a1)
    ctx->pc = 0x18d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 0));
    // 0x18d680: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18d680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18d684: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x18d684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18d688: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x18d688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d68c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x18d68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d690: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x18d690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18d694: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x18d694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x18d698: 0xe4820274  swc1        $f2, 0x274($a0)
    ctx->pc = 0x18d698u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 628), bits); }
    // 0x18d69c: 0xe4810278  swc1        $f1, 0x278($a0)
    ctx->pc = 0x18d69cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
    // 0x18d6a0: 0xe480027c  swc1        $f0, 0x27C($a0)
    ctx->pc = 0x18d6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
    // 0x18d6a4: 0x1000032a  b           . + 4 + (0x32A << 2)
    ctx->pc = 0x18D6A4u;
    {
        const bool branch_taken_0x18d6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6A4u;
        // 0x18d6a8: 0xac830280  sw          $v1, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d6a4) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18D6ACu;
}
