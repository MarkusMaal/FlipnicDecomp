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

// Function: FUN_00140940
// Address: 0x140940 - 0x140cb0
void FUN_00140940_0x140940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00140940_0x140940");
#endif

    switch (ctx->pc) {
        case 0x140a84u: goto label_140a84;
        case 0x140bf4u: goto label_140bf4;
        default: break;
    }

    ctx->pc = 0x140940u;

    // 0x140940: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x140940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140944: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x140944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x140948: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x140948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14094c: 0x27a80000  addiu       $t0, $sp, 0x0
    ctx->pc = 0x14094cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x140950: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x140950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140954: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x140954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x140958: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x140958u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x14095c: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x14095cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x140960: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x140960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x140964: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x140964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140968: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x140968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14096c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x14096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140970: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x140970u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x140974: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x140974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x140978: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x140978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x14097c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x14097cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x140980: 0x8faa0014  lw          $t2, 0x14($sp)
    ctx->pc = 0x140980u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x140984: 0x14ca0007  bne         $a2, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x140984u;
    {
        const bool branch_taken_0x140984 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        if (branch_taken_0x140984) {
            ctx->pc = 0x1409A4u;
            goto label_1409a4;
        }
    }
    ctx->pc = 0x14098Cu;
    // 0x14098c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140990: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x140990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x140994: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x140994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x140998: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x140998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14099c: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x14099Cu;
    {
        const bool branch_taken_0x14099c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1409A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14099Cu;
        // 0x1409a0: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14099c) {
            ctx->pc = 0x140CA8u;
            goto label_140ca8;
        }
    }
    ctx->pc = 0x1409A4u;
label_1409a4:
    // 0x1409a4: 0x8cab0008  lw          $t3, 0x8($a1)
    ctx->pc = 0x1409a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1409a8: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x1409a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1409ac: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1409acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1409b0: 0x1696021  addu        $t4, $t3, $t1
    ctx->pc = 0x1409b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1409b4: 0x188082b  sltu        $at, $t4, $t0
    ctx->pc = 0x1409b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1409b8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1409B8u;
    {
        const bool branch_taken_0x1409b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1409b8) {
            ctx->pc = 0x1409DCu;
            goto label_1409dc;
        }
    }
    ctx->pc = 0x1409C0u;
    // 0x1409c0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1409c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1409c4: 0xc3880  sll         $a3, $t4, 2
    ctx->pc = 0x1409c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1409c8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1409c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1409cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1409ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1409d0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1409d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1409d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1409D4u;
    {
        const bool branch_taken_0x1409d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1409D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409D4u;
        // 0x1409d8: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1409d4) {
            ctx->pc = 0x1409F8u;
            goto label_1409f8;
        }
    }
    ctx->pc = 0x1409DCu;
label_1409dc:
    // 0x1409dc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1409dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1409e0: 0x1883823  subu        $a3, $t4, $t0
    ctx->pc = 0x1409e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1409e4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1409e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1409e8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1409e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1409ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1409ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1409f0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1409f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1409f4: 0xafa90024  sw          $t1, 0x24($sp)
    ctx->pc = 0x1409f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
label_1409f8:
    // 0x1409f8: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x1409f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1409fc: 0xea3823  subu        $a3, $a3, $t2
    ctx->pc = 0x1409fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x140a00: 0xc7082b  sltu        $at, $a2, $a3
    ctx->pc = 0x140a00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x140a04: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x140A04u;
    {
        const bool branch_taken_0x140a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A04u;
        // 0x140a08: 0x1461823  subu        $v1, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a04) {
            ctx->pc = 0x140B48u;
            goto label_140b48;
        }
    }
    ctx->pc = 0x140A0Cu;
    // 0x140a0c: 0x10c00044  beqz        $a2, . + 4 + (0x44 << 2)
    ctx->pc = 0x140A0Cu;
    {
        const bool branch_taken_0x140a0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x140a0c) {
            ctx->pc = 0x140B20u;
            goto label_140b20;
        }
    }
    ctx->pc = 0x140A14u;
    // 0x140a14: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x140a14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x140a18: 0xbc880  sll         $t9, $t3, 2
    ctx->pc = 0x140a18u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x140a1c: 0x27b80030  addiu       $t8, $sp, 0x30
    ctx->pc = 0x140a1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x140a20: 0x27af0070  addiu       $t7, $sp, 0x70
    ctx->pc = 0x140a20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x140a24: 0x27ae0000  addiu       $t6, $sp, 0x0
    ctx->pc = 0x140a24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x140a28: 0x27ad0060  addiu       $t5, $sp, 0x60
    ctx->pc = 0x140a28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x140a2c: 0x27ac0010  addiu       $t4, $sp, 0x10
    ctx->pc = 0x140a2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x140a30: 0x27ab0050  addiu       $t3, $sp, 0x50
    ctx->pc = 0x140a30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x140a34: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x140a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x140a38: 0x27a90068  addiu       $t1, $sp, 0x68
    ctx->pc = 0x140a38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x140a3c: 0x27a80064  addiu       $t0, $sp, 0x64
    ctx->pc = 0x140a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x140a40: 0x1595021  addu        $t2, $t2, $t9
    ctx->pc = 0x140a40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
    // 0x140a44: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x140a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x140a48: 0xafaa0038  sw          $t2, 0x38($sp)
    ctx->pc = 0x140a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 10));
    // 0x140a4c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x140a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x140a50: 0xdf0a0000  ld          $t2, 0x0($t8)
    ctx->pc = 0x140a50u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x140a54: 0xc7000008  lwc1        $f0, 0x8($t8)
    ctx->pc = 0x140a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140a58: 0xfdea0000  sd          $t2, 0x0($t7)
    ctx->pc = 0x140a58u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 10));
    // 0x140a5c: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x140a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x140a60: 0xddca0000  ld          $t2, 0x0($t6)
    ctx->pc = 0x140a60u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x140a64: 0xc5c00008  lwc1        $f0, 0x8($t6)
    ctx->pc = 0x140a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140a68: 0xfdaa0000  sd          $t2, 0x0($t5)
    ctx->pc = 0x140a68u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 10));
    // 0x140a6c: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x140a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x140a70: 0xdd8a0000  ld          $t2, 0x0($t4)
    ctx->pc = 0x140a70u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x140a74: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x140a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140a78: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x140a78u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
    // 0x140a7c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x140A7Cu;
    {
        const bool branch_taken_0x140a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A7Cu;
        // 0x140a80: 0xe5600008  swc1        $f0, 0x8($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a7c) {
            ctx->pc = 0x140B10u;
            goto label_140b10;
        }
    }
    ctx->pc = 0x140A84u;
label_140a84:
    // 0x140a84: 0x8fab0054  lw          $t3, 0x54($sp)
    ctx->pc = 0x140a84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x140a88: 0x8faa0050  lw          $t2, 0x50($sp)
    ctx->pc = 0x140a88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140a8c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x140a8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x140a90: 0xafab0054  sw          $t3, 0x54($sp)
    ctx->pc = 0x140a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 11));
    // 0x140a94: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x140a94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140a98: 0x8d4c000c  lw          $t4, 0xC($t2)
    ctx->pc = 0x140a98u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x140a9c: 0x156c0005  bne         $t3, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x140A9Cu;
    {
        const bool branch_taken_0x140a9c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 12));
        if (branch_taken_0x140a9c) {
            ctx->pc = 0x140AB4u;
            goto label_140ab4;
        }
    }
    ctx->pc = 0x140AA4u;
    // 0x140aa4: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x140aa4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x140aa8: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x140aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x140aac: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x140aacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x140ab0: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x140ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
label_140ab4:
    // 0x140ab4: 0x0  nop
    ctx->pc = 0x140ab4u;
    // NOP
    // 0x140ab8: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x140ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140abc: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x140abcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x140ac0: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x140ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x140ac4: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x140ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x140ac8: 0x8cec0000  lw          $t4, 0x0($a3)
    ctx->pc = 0x140ac8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140acc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x140accu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x140ad0: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x140ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x140ad4: 0x8faa0060  lw          $t2, 0x60($sp)
    ctx->pc = 0x140ad4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140ad8: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x140ad8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140adc: 0x8d4d000c  lw          $t5, 0xC($t2)
    ctx->pc = 0x140adcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x140ae0: 0x156d0005  bne         $t3, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x140AE0u;
    {
        const bool branch_taken_0x140ae0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 13));
        if (branch_taken_0x140ae0) {
            ctx->pc = 0x140AF8u;
            goto label_140af8;
        }
    }
    ctx->pc = 0x140AE8u;
    // 0x140ae8: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x140ae8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x140aec: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x140aecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x140af0: 0x1aa5021  addu        $t2, $t5, $t2
    ctx->pc = 0x140af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x140af4: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x140af4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_140af8:
    // 0x140af8: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x140af8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140afc: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x140afcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x140b00: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x140b00u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x140b04: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x140b04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140b08: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x140b08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x140b0c: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x140b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
label_140b10:
    // 0x140b10: 0x8d0b0000  lw          $t3, 0x0($t0)
    ctx->pc = 0x140b10u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x140b14: 0x8faa0074  lw          $t2, 0x74($sp)
    ctx->pc = 0x140b14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x140b18: 0x156affda  bne         $t3, $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x140B18u;
    {
        const bool branch_taken_0x140b18 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 10));
        if (branch_taken_0x140b18) {
            ctx->pc = 0x140A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140a84;
        }
    }
    ctx->pc = 0x140B20u;
label_140b20:
    // 0x140b20: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x140b20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x140b24: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x140b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x140b28: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x140b28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x140b2c: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x140b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x140b30: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x140b30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140b34: 0x109382b  sltu        $a3, $t0, $t1
    ctx->pc = 0x140b34u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x140b38: 0x14e00053  bnez        $a3, . + 4 + (0x53 << 2)
    ctx->pc = 0x140B38u;
    {
        const bool branch_taken_0x140b38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x140B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B38u;
        // 0x140b3c: 0x1093823  subu        $a3, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b38) {
            ctx->pc = 0x140C88u;
            goto label_140c88;
        }
    }
    ctx->pc = 0x140B40u;
    // 0x140b40: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x140B40u;
    {
        const bool branch_taken_0x140b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B40u;
        // 0x140b44: 0xaca70008  sw          $a3, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b40) {
            ctx->pc = 0x140C88u;
            goto label_140c88;
        }
    }
    ctx->pc = 0x140B48u;
label_140b48:
    // 0x140b48: 0x10e0004f  beqz        $a3, . + 4 + (0x4F << 2)
    ctx->pc = 0x140B48u;
    {
        const bool branch_taken_0x140b48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B48u;
        // 0x140b4c: 0x188082b  sltu        $at, $t4, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b48) {
            ctx->pc = 0x140C88u;
            goto label_140c88;
        }
    }
    ctx->pc = 0x140B50u;
    // 0x140b50: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x140B50u;
    {
        const bool branch_taken_0x140b50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140b50) {
            ctx->pc = 0x140B78u;
            goto label_140b78;
        }
    }
    ctx->pc = 0x140B58u;
    // 0x140b58: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x140b58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x140b5c: 0xc4080  sll         $t0, $t4, 2
    ctx->pc = 0x140b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x140b60: 0x27af0040  addiu       $t7, $sp, 0x40
    ctx->pc = 0x140b60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x140b64: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x140b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x140b68: 0xafa90044  sw          $t1, 0x44($sp)
    ctx->pc = 0x140b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 9));
    // 0x140b6c: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x140b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x140b70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x140B70u;
    {
        const bool branch_taken_0x140b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B70u;
        // 0x140b74: 0xafa50040  sw          $a1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b70) {
            ctx->pc = 0x140B98u;
            goto label_140b98;
        }
    }
    ctx->pc = 0x140B78u;
label_140b78:
    // 0x140b78: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x140b78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x140b7c: 0x1884023  subu        $t0, $t4, $t0
    ctx->pc = 0x140b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x140b80: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x140b80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x140b84: 0x27af0040  addiu       $t7, $sp, 0x40
    ctx->pc = 0x140b84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x140b88: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x140b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x140b8c: 0xafa90044  sw          $t1, 0x44($sp)
    ctx->pc = 0x140b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 9));
    // 0x140b90: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x140b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x140b94: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x140b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_140b98:
    // 0x140b98: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x140b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x140b9c: 0x27ae00a0  addiu       $t6, $sp, 0xA0
    ctx->pc = 0x140b9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x140ba0: 0xdced0000  ld          $t5, 0x0($a3)
    ctx->pc = 0x140ba0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140ba4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x140ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140ba8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x140ba8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x140bac: 0x27ac0000  addiu       $t4, $sp, 0x0
    ctx->pc = 0x140bacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x140bb0: 0x27ab0080  addiu       $t3, $sp, 0x80
    ctx->pc = 0x140bb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x140bb4: 0x27a800a8  addiu       $t0, $sp, 0xA8
    ctx->pc = 0x140bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x140bb8: 0x27a90088  addiu       $t1, $sp, 0x88
    ctx->pc = 0x140bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x140bbc: 0xfdcd0000  sd          $t5, 0x0($t6)
    ctx->pc = 0x140bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 13));
    // 0x140bc0: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x140bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x140bc4: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x140bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x140bc8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x140bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140bcc: 0xc5e10004  lwc1        $f1, 0x4($t7)
    ctx->pc = 0x140bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140bd0: 0xc5e00008  lwc1        $f0, 0x8($t7)
    ctx->pc = 0x140bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140bd4: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x140bd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x140bd8: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x140bd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x140bdc: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x140bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x140be0: 0xdd8a0000  ld          $t2, 0x0($t4)
    ctx->pc = 0x140be0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x140be4: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x140be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140be8: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x140be8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
    // 0x140bec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x140BECu;
    {
        const bool branch_taken_0x140bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BECu;
        // 0x140bf0: 0xe5600008  swc1        $f0, 0x8($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bec) {
            ctx->pc = 0x140C78u;
            goto label_140c78;
        }
    }
    ctx->pc = 0x140BF4u;
label_140bf4:
    // 0x140bf4: 0x8d0b0000  lw          $t3, 0x0($t0)
    ctx->pc = 0x140bf4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x140bf8: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x140bf8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140bfc: 0x8d6b0000  lw          $t3, 0x0($t3)
    ctx->pc = 0x140bfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x140c00: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x140c00u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x140c04: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x140c04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140c08: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x140c08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x140c0c: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x140c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x140c10: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x140c10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x140c14: 0x254c0004  addiu       $t4, $t2, 0x4
    ctx->pc = 0x140c14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x140c18: 0xad0c0000  sw          $t4, 0x0($t0)
    ctx->pc = 0x140c18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 12));
    // 0x140c1c: 0x8fab00a0  lw          $t3, 0xA0($sp)
    ctx->pc = 0x140c1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x140c20: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x140c20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x140c24: 0x8d6b000c  lw          $t3, 0xC($t3)
    ctx->pc = 0x140c24u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x140c28: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x140c28u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x140c2c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x140c2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x140c30: 0x158a0002  bne         $t4, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x140C30u;
    {
        const bool branch_taken_0x140c30 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 10));
        if (branch_taken_0x140c30) {
            ctx->pc = 0x140C3Cu;
            goto label_140c3c;
        }
    }
    ctx->pc = 0x140C38u;
    // 0x140c38: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x140c38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
label_140c3c:
    // 0x140c3c: 0x0  nop
    ctx->pc = 0x140c3cu;
    // NOP
    // 0x140c40: 0x8faa0084  lw          $t2, 0x84($sp)
    ctx->pc = 0x140c40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x140c44: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x140c44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x140c48: 0xafaa0084  sw          $t2, 0x84($sp)
    ctx->pc = 0x140c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 10));
    // 0x140c4c: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x140c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140c50: 0x254c0004  addiu       $t4, $t2, 0x4
    ctx->pc = 0x140c50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x140c54: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x140c54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x140c58: 0x8fab0080  lw          $t3, 0x80($sp)
    ctx->pc = 0x140c58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x140c5c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x140c5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x140c60: 0x8d6b000c  lw          $t3, 0xC($t3)
    ctx->pc = 0x140c60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x140c64: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x140c64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x140c68: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x140c68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x140c6c: 0x158a0002  bne         $t4, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x140C6Cu;
    {
        const bool branch_taken_0x140c6c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 10));
        if (branch_taken_0x140c6c) {
            ctx->pc = 0x140C78u;
            goto label_140c78;
        }
    }
    ctx->pc = 0x140C74u;
    // 0x140c74: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x140c74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_140c78:
    // 0x140c78: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x140c78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140c7c: 0x8faa0094  lw          $t2, 0x94($sp)
    ctx->pc = 0x140c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x140c80: 0x156affdc  bne         $t3, $t2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x140C80u;
    {
        const bool branch_taken_0x140c80 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 10));
        if (branch_taken_0x140c80) {
            ctx->pc = 0x140BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140bf4;
        }
    }
    ctx->pc = 0x140C88u;
label_140c88:
    // 0x140c88: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x140c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x140c8c: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x140c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x140c90: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x140c90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x140c94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x140c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140c98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x140c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x140c9c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x140c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x140ca0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x140ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140ca4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x140ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_140ca8:
    // 0x140ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x140CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CA8u;
        // 0x140cac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140CB0u;
}
