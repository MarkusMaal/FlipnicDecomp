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

// Function: FUN_00170070
// Address: 0x170070 - 0x17043c
void FUN_00170070_0x170070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00170070_0x170070");
#endif

    switch (ctx->pc) {
        case 0x1700c0u: goto label_1700c0;
        case 0x170134u: goto label_170134;
        case 0x170194u: goto label_170194;
        case 0x1701c4u: goto label_1701c4;
        case 0x170290u: goto label_170290;
        case 0x1702a0u: goto label_1702a0;
        case 0x170334u: goto label_170334;
        case 0x170350u: goto label_170350;
        default: break;
    }

    ctx->pc = 0x170070u;

    // 0x170070: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x170070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x170074: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x170074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x170078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x170078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17007c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17007cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170080: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x170080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170084: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x170084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x170088: 0x8083002d  lb          $v1, 0x2D($a0)
    ctx->pc = 0x170088u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x17008c: 0x146000e5  bnez        $v1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x17008Cu;
    {
        const bool branch_taken_0x17008c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17008Cu;
        // 0x170090: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17008c) {
            ctx->pc = 0x170424u;
            goto label_170424;
        }
    }
    ctx->pc = 0x170094u;
    // 0x170094: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x170094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x170098: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x170098u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17009c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17009cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1700a0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1700a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1700a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1700a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1700a8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1700a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1700ac: 0x90630234  lbu         $v1, 0x234($v1)
    ctx->pc = 0x1700acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 564)));
    // 0x1700b0: 0x146000dc  bnez        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x1700B0u;
    {
        const bool branch_taken_0x1700b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1700B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700B0u;
        // 0x1700b4: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700b0) {
            ctx->pc = 0x170424u;
            goto label_170424;
        }
    }
    ctx->pc = 0x1700B8u;
    // 0x1700b8: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1700B8u;
    {
        const bool branch_taken_0x1700b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1700b8) {
            ctx->pc = 0x170414u;
            goto label_170414;
        }
    }
    ctx->pc = 0x1700C0u;
label_1700c0:
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
            goto label_170410;
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
            goto label_170424;
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
            goto label_170410;
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
            goto label_170220;
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
label_170220:
    // 0x170220: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x170220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x170224: 0x712023  subu        $a0, $v1, $s1
    ctx->pc = 0x170224u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x170228: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x170228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x17022c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17022cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x170230: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x170230u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x170234: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x170234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x170238: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x170238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17023c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17023cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x170240: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x170240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x170244: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x170244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x170248: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x170248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17024c: 0xe48202e0  swc1        $f2, 0x2E0($a0)
    ctx->pc = 0x17024cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 736), bits); }
    // 0x170250: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x170250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x170254: 0xe46102e0  swc1        $f1, 0x2E0($v1)
    ctx->pc = 0x170254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 736), bits); }
    // 0x170258: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x170258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x17025c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x17025cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x170260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x170260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170264: 0x0  nop
    ctx->pc = 0x170264u;
    // NOP
    // 0x170268: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x170268u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17026c: 0x0  nop
    ctx->pc = 0x17026cu;
    // NOP
    // 0x170270: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x170270u;
    {
        const bool branch_taken_0x170270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170270) {
            ctx->pc = 0x170288u;
            goto label_170288;
        }
    }
    ctx->pc = 0x170278u;
    // 0x170278: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x170278u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17027c: 0x0  nop
    ctx->pc = 0x17027cu;
    // NOP
    // 0x170280: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x170280u;
    {
        const bool branch_taken_0x170280 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x170280) {
            ctx->pc = 0x170350u;
            goto label_170350;
        }
    }
    ctx->pc = 0x170288u;
label_170288:
    // 0x170288: 0xc062d50  jal         func_18B540
    ctx->pc = 0x170288u;
    SET_GPR_U32(ctx, 31, 0x170290u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x170288u, 0x170290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170290u;
label_170290:
    // 0x170290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170294: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x170294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x170298: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x170298u;
    SET_GPR_U32(ctx, 31, 0x1702A0u);
    ctx->pc = 0x17029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170298u;
    // 0x17029c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x170298u, 0x1702A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702A0u;
label_1702a0:
    // 0x1702a0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1702a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1702a4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1702a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1702a8: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x1702a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1702ac: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1702acu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1702b0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1702b0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1702b4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1702b4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1702b8: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x1702b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1702bc: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1702bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1702c0: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x1702c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1702c4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1702c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1702c8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1702c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1702cc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1702ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1702d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1702d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1702d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1702d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1702d8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1702d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1702dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1702dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1702e0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1702e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1702e4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1702e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1702e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1702e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1702ec: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x1702ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1702f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1702f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1702f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1702f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1702f8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1702f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1702fc: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x1702fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x170300: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x170300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x170304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170308: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x170308u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17030c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17030cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170310: 0x4be721a8  vadd.xyzw   $vf6, $vf4, $vf7
    ctx->pc = 0x170310u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x170314: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x170314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x170318: 0x0  nop
    ctx->pc = 0x170318u;
    // NOP
    // 0x17031c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17031cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x170320: 0x4be53118  vmulx.xyzw  $vf4, $vf6, $vf5x
    ctx->pc = 0x170320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x170324: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x170324u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x170328: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x170328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17032c: 0xc046458  jal         func_119160
    ctx->pc = 0x17032Cu;
    SET_GPR_U32(ctx, 31, 0x170334u);
    ctx->pc = 0x170330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17032Cu;
    // 0x170330: 0x2484f480  addiu       $a0, $a0, -0xB80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x17032Cu, 0x170334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170334u;
label_170334:
    // 0x170334: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x170334u;
    {
        const bool branch_taken_0x170334 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x170338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170334u;
        // 0x170338: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170334) {
            ctx->pc = 0x170350u;
            goto label_170350;
        }
    }
    ctx->pc = 0x17033Cu;
    // 0x17033c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17033cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x170340: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x170340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x170344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170348: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x170348u;
    SET_GPR_U32(ctx, 31, 0x170350u);
    ctx->pc = 0x17034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170348u;
    // 0x17034c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x170348u, 0x170350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170350u;
label_170350:
    // 0x170350: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x170350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x170354: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x170354u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x170358: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x170358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x17035c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17035cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x170360: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x170360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x170364: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x170364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x170368: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x170368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17036c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17036cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x170370: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x170370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x170374: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x170374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x170378: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x170378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17037c: 0x8c880330  lw          $t0, 0x330($a0)
    ctx->pc = 0x17037cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x170380: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x170380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x170384: 0x24650340  addiu       $a1, $v1, 0x340
    ctx->pc = 0x170384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x170388: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x170388u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17038c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x17038cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x170390: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x170390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x170394: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x170394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x170398: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x170398u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x17039c: 0x0  nop
    ctx->pc = 0x17039cu;
    // NOP
    // 0x1703a0: 0x48a83800  qmtc2.ni    $t0, $vf7
    ctx->pc = 0x1703a0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1703a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1703a4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1703a8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1703a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1703ac: 0x4a053bbc  vdiv        $Q, $vf7x, $vf5x
    ctx->pc = 0x1703acu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1703b0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1703b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1703b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1703b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1703b8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1703b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1703bc: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x1703bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1703c0: 0x24850340  addiu       $a1, $a0, 0x340
    ctx->pc = 0x1703c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 832));
    // 0x1703c4: 0x8c680330  lw          $t0, 0x330($v1)
    ctx->pc = 0x1703c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x1703c8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1703c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1703cc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1703ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1703d0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1703d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1703d4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1703d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1703d8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1703d8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1703dc: 0x0  nop
    ctx->pc = 0x1703dcu;
    // NOP
    // 0x1703e0: 0x48a83800  qmtc2.ni    $t0, $vf7
    ctx->pc = 0x1703e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1703e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1703e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1703e8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1703e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1703ec: 0x4a053bbc  vdiv        $Q, $vf7x, $vf5x
    ctx->pc = 0x1703ecu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1703f0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1703f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1703f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1703f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1703f8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1703f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1703fc: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x1703fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x170400: 0xc4810330  lwc1        $f1, 0x330($a0)
    ctx->pc = 0x170400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170404: 0xc4620330  lwc1        $f2, 0x330($v1)
    ctx->pc = 0x170404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x170408: 0xe4820330  swc1        $f2, 0x330($a0)
    ctx->pc = 0x170408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 816), bits); }
    // 0x17040c: 0xe4610330  swc1        $f1, 0x330($v1)
    ctx->pc = 0x17040cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 816), bits); }
label_170410:
    // 0x170410: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x170410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_170414:
    // 0x170414: 0x0  nop
    ctx->pc = 0x170414u;
    // NOP
    // 0x170418: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x170418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x17041c: 0x1460ff28  bnez        $v1, . + 4 + (-0xD8 << 2)
    ctx->pc = 0x17041Cu;
    {
        const bool branch_taken_0x17041c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17041Cu;
        // 0x170420: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17041c) {
            ctx->pc = 0x1700C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1700c0;
        }
    }
    ctx->pc = 0x170424u;
label_170424:
    // 0x170424: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x170424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x170428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17042c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17042cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x170430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170434: 0x3e00008  jr          $ra
    ctx->pc = 0x170434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170434u;
        // 0x170438: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17043Cu;
}
