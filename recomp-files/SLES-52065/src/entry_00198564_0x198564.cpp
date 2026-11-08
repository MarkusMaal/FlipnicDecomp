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

// Function: entry_00198564
// Address: 0x198564 - 0x19861c
void entry_00198564_0x198564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198564_0x198564");
#endif

    switch (ctx->pc) {
        case 0x198604u: goto label_198604;
        case 0x198614u: goto label_198614;
        default: break;
    }

    ctx->pc = 0x198564u;

    // 0x198564: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x198564u;
    {
        const bool branch_taken_0x198564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198564) {
            ctx->pc = 0x19861Cu;
            return;
        }
    }
    ctx->pc = 0x19856Cu;
    // 0x19856c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19856cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x198570: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x198570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x198574: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x198574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198578: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x198578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19857c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19857cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198580: 0x24a5d820  addiu       $a1, $a1, -0x27E0
    ctx->pc = 0x198580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957088));
    // 0x198584: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198588: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x198588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19858c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19858cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x198590: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x198590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x198594: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x198594u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198598: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x198598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19859c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19859cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1985a0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1985a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1985a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1985a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1985a8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1985a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1985ac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1985acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1985b0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1985b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1985b4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1985b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1985b8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1985b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1985bc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1985bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1985c0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1985c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1985c4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1985c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1985c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1985c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1985cc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1985ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1985d0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1985d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1985d4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1985d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1985d8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1985d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1985dc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1985dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1985e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1985e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1985e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1985e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1985e8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1985e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1985ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1985ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1985f0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1985f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1985f4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1985f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1985f8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1985f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1985fc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1985FCu;
    SET_GPR_U32(ctx, 31, 0x198604u);
    ctx->pc = 0x198600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1985FCu;
    // 0x198600: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1985FCu, 0x198604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198604u;
label_198604:
    // 0x198604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198608: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x198608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19860c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19860Cu;
    SET_GPR_U32(ctx, 31, 0x198614u);
    ctx->pc = 0x198610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19860Cu;
    // 0x198610: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19860Cu, 0x198614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198614u;
label_198614:
    // 0x198614: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x198614u;
    {
        const bool branch_taken_0x198614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198614u;
        // 0x198618: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198614) {
            ctx->pc = 0x198624u;
            return;
        }
    }
    ctx->pc = 0x19861Cu;
}
