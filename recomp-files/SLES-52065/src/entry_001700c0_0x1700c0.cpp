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

// Function: entry_001700c0
// Address: 0x1700c0 - 0x170220
void entry_001700c0_0x1700c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001700c0_0x1700c0");
#endif

    switch (ctx->pc) {
        case 0x170134u: goto label_170134;
        case 0x170194u: goto label_170194;
        case 0x1701c4u: goto label_1701c4;
        default: break;
    }

    ctx->pc = 0x1700c0u;

    // 0x1700c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1700c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1700c4: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x1700c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1700c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1700c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1700cc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1700ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1700d0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1700d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1700d4: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x1700d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1700d8: 0x84a40228  lh          $a0, 0x228($a1)
    ctx->pc = 0x1700d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 552)));
    // 0x1700dc: 0x108300cc  beq         $a0, $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x1700DCu;
    {
        const bool branch_taken_0x1700dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1700dc) {
            ctx->pc = 0x170410u;
            return;
        }
    }
    ctx->pc = 0x1700E4u;
    // 0x1700e4: 0x90a30233  lbu         $v1, 0x233($a1)
    ctx->pc = 0x1700e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 563)));
    // 0x1700e8: 0x146000ce  bnez        $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x1700E8u;
    {
        const bool branch_taken_0x1700e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1700e8) {
            ctx->pc = 0x170424u;
            return;
        }
    }
    ctx->pc = 0x1700F0u;
    // 0x1700f0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1700f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1700f4: 0x24a60040  addiu       $a2, $a1, 0x40
    ctx->pc = 0x1700f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1700f8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1700f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1700fc: 0x24a70340  addiu       $a3, $a1, 0x340
    ctx->pc = 0x1700fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 832));
    // 0x170100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x170100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170104: 0x24a902d0  addiu       $t1, $a1, 0x2D0
    ctx->pc = 0x170104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
    // 0x170108: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x170108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17010c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x17010cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170110: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x170110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170114: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x170114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x170118: 0xc4ad0200  lwc1        $f13, 0x200($a1)
    ctx->pc = 0x170118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17011c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x17011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x170120: 0xc44c0200  lwc1        $f12, 0x200($v0)
    ctx->pc = 0x170120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x170124: 0x244802d0  addiu       $t0, $v0, 0x2D0
    ctx->pc = 0x170124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x170128: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x170128u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17012c: 0xc05be38  jal         func_16F8E0
    ctx->pc = 0x17012Cu;
    SET_GPR_U32(ctx, 31, 0x170134u);
    ctx->pc = 0x170130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17012Cu;
    // 0x170130: 0x24450340  addiu       $a1, $v0, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F8E0u, 0x17012Cu, 0x170134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170134u;
label_170134:
    // 0x170134: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x170134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x170138: 0x0  nop
    ctx->pc = 0x170138u;
    // NOP
    // 0x17013c: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x17013cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170140: 0x0  nop
    ctx->pc = 0x170140u;
    // NOP
    // 0x170144: 0x450100b2  bc1t        . + 4 + (0xB2 << 2)
    ctx->pc = 0x170144u;
    {
        const bool branch_taken_0x170144 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170144u;
        // 0x170148: 0x101900  sll         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170144) {
            ctx->pc = 0x170410u;
            return;
        }
    }
    ctx->pc = 0x17014Cu;
    // 0x17014c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x17014cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x170150: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x170150u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x170154: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x170154u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x170158: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x170158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17015c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17015cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170160: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x170160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x170164: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x170164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x170168: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x170168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17016c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17016cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170170: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x170170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x170174: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x170174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x170178: 0x3c023f28  lui         $v0, 0x3F28
    ctx->pc = 0x170178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16168 << 16));
    // 0x17017c: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x17017cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x170180: 0xe4800328  swc1        $f0, 0x328($a0)
    ctx->pc = 0x170180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 808), bits); }
    // 0x170184: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x170184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x170188: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x170188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x17018c: 0xc056194  jal         func_158650
    ctx->pc = 0x17018Cu;
    SET_GPR_U32(ctx, 31, 0x170194u);
    ctx->pc = 0x170190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17018Cu;
    // 0x170190: 0xe4600328  swc1        $f0, 0x328($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 808), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x17018Cu, 0x170194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170194u;
label_170194:
    // 0x170194: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x170194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x170198: 0x3c023f28  lui         $v0, 0x3F28
    ctx->pc = 0x170198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16168 << 16));
    // 0x17019c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x17019cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1701a0: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x1701a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x1701a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1701a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1701a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1701a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1701ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1701acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1701b0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1701b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1701b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1701b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1701b8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1701b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1701bc: 0xc056194  jal         func_158650
    ctx->pc = 0x1701BCu;
    SET_GPR_U32(ctx, 31, 0x1701C4u);
    ctx->pc = 0x1701C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1701BCu;
    // 0x1701c0: 0x24640040  addiu       $a0, $v1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x1701BCu, 0x1701C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1701C4u;
label_1701c4:
    // 0x1701c4: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1701c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1701c8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1701c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1701cc: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1701ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1701d0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1701d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1701d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1701d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1701d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1701d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1701dc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1701dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1701e0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1701e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1701e4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1701e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1701e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1701e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1701ec: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1701ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1701f0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1701f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1701f4: 0xc4830200  lwc1        $f3, 0x200($a0)
    ctx->pc = 0x1701f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1701f8: 0xc4600200  lwc1        $f0, 0x200($v1)
    ctx->pc = 0x1701f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1701fc: 0xc46202e0  lwc1        $f2, 0x2E0($v1)
    ctx->pc = 0x1701fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x170200: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x170200u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170204: 0x0  nop
    ctx->pc = 0x170204u;
    // NOP
    // 0x170208: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x170208u;
    {
        const bool branch_taken_0x170208 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170208u;
        // 0x17020c: 0xc48102e0  lwc1        $f1, 0x2E0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170208) {
            ctx->pc = 0x170220u;
            return;
        }
    }
    ctx->pc = 0x170210u;
    // 0x170210: 0x0  nop
    ctx->pc = 0x170210u;
    // NOP
    // 0x170214: 0x0  nop
    ctx->pc = 0x170214u;
    // NOP
    // 0x170218: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x170218u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x17021c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x17021cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    ctx->pc = 0x170220u;
}
