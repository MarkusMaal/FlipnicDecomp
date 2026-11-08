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

// Function: FUN_00164920
// Address: 0x164920 - 0x164c78
void FUN_00164920_0x164920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164920_0x164920");
#endif

    switch (ctx->pc) {
        case 0x164980u: goto label_164980;
        case 0x1649a0u: goto label_1649a0;
        case 0x1649d8u: goto label_1649d8;
        case 0x164ab8u: goto label_164ab8;
        case 0x164b20u: goto label_164b20;
        default: break;
    }

    ctx->pc = 0x164920u;

    // 0x164920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x164920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x164924: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x164924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x164928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x164928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16492c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16492cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x164930: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164934: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x164934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16493c: 0xc4a102f0  lwc1        $f1, 0x2F0($a1)
    ctx->pc = 0x16493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164940: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x164940u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164944: 0x0  nop
    ctx->pc = 0x164944u;
    // NOP
    // 0x164948: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x164948u;
    {
        const bool branch_taken_0x164948 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164948u;
        // 0x16494c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164948) {
            ctx->pc = 0x164958u;
            goto label_164958;
        }
    }
    ctx->pc = 0x164950u;
    // 0x164950: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x164950u;
    {
        const bool branch_taken_0x164950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164950u;
        // 0x164954: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164950) {
            ctx->pc = 0x164C60u;
            goto label_164c60;
        }
    }
    ctx->pc = 0x164958u;
label_164958:
    // 0x164958: 0x862201ea  lh          $v0, 0x1EA($s1)
    ctx->pc = 0x164958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 490)));
    // 0x16495c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16495Cu;
    {
        const bool branch_taken_0x16495c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16495Cu;
        // 0x164960: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16495c) {
            ctx->pc = 0x16496Cu;
            goto label_16496c;
        }
    }
    ctx->pc = 0x164964u;
    // 0x164964: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x164964u;
    {
        const bool branch_taken_0x164964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164964u;
        // 0x164968: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164964) {
            ctx->pc = 0x164C64u;
            goto label_164c64;
        }
    }
    ctx->pc = 0x16496Cu;
label_16496c:
    // 0x16496c: 0x862201e8  lh          $v0, 0x1E8($s1)
    ctx->pc = 0x16496cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x164970: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x164970u;
    {
        const bool branch_taken_0x164970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164970) {
            ctx->pc = 0x164994u;
            goto label_164994;
        }
    }
    ctx->pc = 0x164978u;
    // 0x164978: 0xc058c90  jal         func_163240
    ctx->pc = 0x164978u;
    SET_GPR_U32(ctx, 31, 0x164980u);
    ctx->pc = 0x163240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163240u, 0x164978u, 0x164980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164980u;
label_164980:
    // 0x164980: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164980u;
    {
        const bool branch_taken_0x164980 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x164980) {
            ctx->pc = 0x164990u;
            goto label_164990;
        }
    }
    ctx->pc = 0x164988u;
    // 0x164988: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x164988u;
    {
        const bool branch_taken_0x164988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164988u;
        // 0x16498c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164988) {
            ctx->pc = 0x164C60u;
            goto label_164c60;
        }
    }
    ctx->pc = 0x164990u;
label_164990:
    // 0x164990: 0xa240024e  sb          $zero, 0x24E($s2)
    ctx->pc = 0x164990u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 590), (uint8_t)GPR_U32(ctx, 0));
label_164994:
    // 0x164994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164998: 0xc059320  jal         func_164C80
    ctx->pc = 0x164998u;
    SET_GPR_U32(ctx, 31, 0x1649A0u);
    ctx->pc = 0x16499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164998u;
    // 0x16499c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C80u, 0x164998u, 0x1649A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649A0u;
label_1649a0:
    // 0x1649a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1649a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649a4: 0x9242024e  lbu         $v0, 0x24E($s2)
    ctx->pc = 0x1649a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 590)));
    // 0x1649a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1649A8u;
    {
        const bool branch_taken_0x1649a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1649a8) {
            ctx->pc = 0x1649E0u;
            goto label_1649e0;
        }
    }
    ctx->pc = 0x1649B0u;
    // 0x1649b0: 0xc62102ec  lwc1        $f1, 0x2EC($s1)
    ctx->pc = 0x1649b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1649b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1649b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1649b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1649b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1649bc: 0x0  nop
    ctx->pc = 0x1649bcu;
    // NOP
    // 0x1649c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1649c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1649c4: 0x0  nop
    ctx->pc = 0x1649c4u;
    // NOP
    // 0x1649c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1649C8u;
    {
        const bool branch_taken_0x1649c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1649CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649C8u;
        // 0x1649cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1649c8) {
            ctx->pc = 0x1649E0u;
            goto label_1649e0;
        }
    }
    ctx->pc = 0x1649D0u;
    // 0x1649d0: 0xc042118  jal         func_108460
    ctx->pc = 0x1649D0u;
    SET_GPR_U32(ctx, 31, 0x1649D8u);
    ctx->pc = 0x1649D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649D0u;
    // 0x1649d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1649D0u, 0x1649D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649D8u;
label_1649d8:
    // 0x1649d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1649d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1649dc: 0xa242024e  sb          $v0, 0x24E($s2)
    ctx->pc = 0x1649dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 590), (uint8_t)GPR_U32(ctx, 2));
label_1649e0:
    // 0x1649e0: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1649e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1649e4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1649e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1649e8: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x1649e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1649ec: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x1649ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x1649f0: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1649f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1649f4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1649f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1649f8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1649f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1649fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1649FCu;
    {
        const bool branch_taken_0x1649fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649FCu;
        // 0x164a00: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1649fc) {
            ctx->pc = 0x164A18u;
            goto label_164a18;
        }
    }
    ctx->pc = 0x164A04u;
    // 0x164a04: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x164a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x164a08: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x164a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x164a0c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x164a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x164a10: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x164a10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164a14: 0x0  nop
    ctx->pc = 0x164a14u;
    // NOP
label_164a18:
    // 0x164a18: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x164A18u;
    {
        const bool branch_taken_0x164a18 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x164A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A18u;
        // 0x164a1c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a18) {
            ctx->pc = 0x164A28u;
            goto label_164a28;
        }
    }
    ctx->pc = 0x164A20u;
    // 0x164a20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x164A20u;
    {
        const bool branch_taken_0x164a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A20u;
        // 0x164a24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a20) {
            ctx->pc = 0x164A48u;
            goto label_164a48;
        }
    }
    ctx->pc = 0x164A28u;
label_164a28:
    // 0x164a28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x164a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164a2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164a30: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x164a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x164a34: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164A34u;
    {
        const bool branch_taken_0x164a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x164a34) {
            ctx->pc = 0x164A44u;
            goto label_164a44;
        }
    }
    ctx->pc = 0x164A3Cu;
    // 0x164a3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164A3Cu;
    {
        const bool branch_taken_0x164a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a3c) {
            ctx->pc = 0x164A48u;
            goto label_164a48;
        }
    }
    ctx->pc = 0x164A44u;
label_164a44:
    // 0x164a44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x164a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164a48:
    // 0x164a48: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x164A48u;
    {
        const bool branch_taken_0x164a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a48) {
            ctx->pc = 0x164A74u;
            goto label_164a74;
        }
    }
    ctx->pc = 0x164A50u;
    // 0x164a50: 0x862203c4  lh          $v0, 0x3C4($s1)
    ctx->pc = 0x164a50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 964)));
    // 0x164a54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164A54u;
    {
        const bool branch_taken_0x164a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a54) {
            ctx->pc = 0x164A74u;
            goto label_164a74;
        }
    }
    ctx->pc = 0x164A5Cu;
    // 0x164a5c: 0x862303c6  lh          $v1, 0x3C6($s1)
    ctx->pc = 0x164a5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x164a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164a64: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164A64u;
    {
        const bool branch_taken_0x164a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x164a64) {
            ctx->pc = 0x164A74u;
            goto label_164a74;
        }
    }
    ctx->pc = 0x164A6Cu;
    // 0x164a6c: 0xa62203c6  sh          $v0, 0x3C6($s1)
    ctx->pc = 0x164a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 966), (uint16_t)GPR_U32(ctx, 2));
    // 0x164a70: 0xae2003c0  sw          $zero, 0x3C0($s1)
    ctx->pc = 0x164a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 960), GPR_U32(ctx, 0));
label_164a74:
    // 0x164a74: 0x862303c6  lh          $v1, 0x3C6($s1)
    ctx->pc = 0x164a74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x164a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164a7c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x164A7Cu;
    {
        const bool branch_taken_0x164a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A7Cu;
        // 0x164a80: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a7c) {
            ctx->pc = 0x164B00u;
            goto label_164b00;
        }
    }
    ctx->pc = 0x164A84u;
    // 0x164a84: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x164a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x164a88: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x164a88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164a8c: 0x4a802103  vaddw.y     $vf4, $vf4, $vf0w
    ctx->pc = 0x164a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164a90: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164a90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164a94: 0xc62102a0  lwc1        $f1, 0x2A0($s1)
    ctx->pc = 0x164a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164a98: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x164a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x164a9c: 0xc62003c0  lwc1        $f0, 0x3C0($s1)
    ctx->pc = 0x164a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164aa0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164aa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x164aa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x164aa8: 0xe62003c0  swc1        $f0, 0x3C0($s1)
    ctx->pc = 0x164aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 960), bits); }
    // 0x164aac: 0xc62e03c0  lwc1        $f14, 0x3C0($s1)
    ctx->pc = 0x164aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x164ab0: 0xc05be24  jal         func_16F890
    ctx->pc = 0x164AB0u;
    SET_GPR_U32(ctx, 31, 0x164AB8u);
    ctx->pc = 0x164AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164AB0u;
    // 0x164ab4: 0xc62d03c8  lwc1        $f13, 0x3C8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F890u, 0x164AB0u, 0x164AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164AB8u;
label_164ab8:
    // 0x164ab8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x164ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164abc: 0x0  nop
    ctx->pc = 0x164abcu;
    // NOP
    // 0x164ac0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x164ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164ac4: 0x0  nop
    ctx->pc = 0x164ac4u;
    // NOP
    // 0x164ac8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x164AC8u;
    {
        const bool branch_taken_0x164ac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x164ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AC8u;
        // 0x164acc: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ac8) {
            ctx->pc = 0x164ADCu;
            goto label_164adc;
        }
    }
    ctx->pc = 0x164AD0u;
    // 0x164ad0: 0xa62003c6  sh          $zero, 0x3C6($s1)
    ctx->pc = 0x164ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 966), (uint16_t)GPR_U32(ctx, 0));
    // 0x164ad4: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x164ad4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x164ad8: 0xe62103c0  swc1        $f1, 0x3C0($s1)
    ctx->pc = 0x164ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 960), bits); }
label_164adc:
    // 0x164adc: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x164adcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164ae0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164ae0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164ae4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x164ae4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x164ae8: 0x0  nop
    ctx->pc = 0x164ae8u;
    // NOP
    // 0x164aec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x164aecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x164af0: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x164af0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164af4: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x164af4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164af8: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x164af8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164afc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x164afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_164b00:
    // 0x164b00: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164B00u;
    {
        const bool branch_taken_0x164b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x164B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B00u;
        // 0x164b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b00) {
            ctx->pc = 0x164B14u;
            goto label_164b14;
        }
    }
    ctx->pc = 0x164B08u;
    // 0x164b08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164b0c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x164B0Cu;
    {
        const bool branch_taken_0x164b0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x164b0c) {
            ctx->pc = 0x164B38u;
            goto label_164b38;
        }
    }
    ctx->pc = 0x164B14u;
label_164b14:
    // 0x164b14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x164b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b18: 0xc058d4c  jal         func_163530
    ctx->pc = 0x164B18u;
    SET_GPR_U32(ctx, 31, 0x164B20u);
    ctx->pc = 0x164B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164B18u;
    // 0x164b1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163530u, 0x164B18u, 0x164B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B20u;
label_164b20:
    // 0x164b20: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164B20u;
    {
        const bool branch_taken_0x164b20 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x164B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B20u;
        // 0x164b24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b20) {
            ctx->pc = 0x164B30u;
            goto label_164b30;
        }
    }
    ctx->pc = 0x164B28u;
    // 0x164b28: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x164B28u;
    {
        const bool branch_taken_0x164b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B28u;
        // 0x164b2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b28) {
            ctx->pc = 0x164C60u;
            goto label_164c60;
        }
    }
    ctx->pc = 0x164B30u;
label_164b30:
    // 0x164b30: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x164B30u;
    {
        const bool branch_taken_0x164b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164b30) {
            ctx->pc = 0x164C60u;
            goto label_164c60;
        }
    }
    ctx->pc = 0x164B38u;
label_164b38:
    // 0x164b38: 0x8643021a  lh          $v1, 0x21A($s2)
    ctx->pc = 0x164b38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 538)));
    // 0x164b3c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x164b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x164b40: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x164B40u;
    {
        const bool branch_taken_0x164b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B40u;
        // 0x164b44: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b40) {
            ctx->pc = 0x164B70u;
            goto label_164b70;
        }
    }
    ctx->pc = 0x164B48u;
    // 0x164b48: 0xc6210348  lwc1        $f1, 0x348($s1)
    ctx->pc = 0x164b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164b4c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x164b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x164b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164b54: 0x0  nop
    ctx->pc = 0x164b54u;
    // NOP
    // 0x164b58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x164b58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164b5c: 0x0  nop
    ctx->pc = 0x164b5cu;
    // NOP
    // 0x164b60: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x164B60u;
    {
        const bool branch_taken_0x164b60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x164B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B60u;
        // 0x164b64: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b60) {
            ctx->pc = 0x164B6Cu;
            goto label_164b6c;
        }
    }
    ctx->pc = 0x164B68u;
    // 0x164b68: 0xa62201ea  sh          $v0, 0x1EA($s1)
    ctx->pc = 0x164b68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 490), (uint16_t)GPR_U32(ctx, 2));
label_164b6c:
    // 0x164b6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x164b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_164b70:
    // 0x164b70: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x164b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x164b74: 0xa62301e8  sh          $v1, 0x1E8($s1)
    ctx->pc = 0x164b74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 3));
    // 0x164b78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x164b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164b7c: 0x8e240340  lw          $a0, 0x340($s1)
    ctx->pc = 0x164b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x164b80: 0xc6240344  lwc1        $f4, 0x344($s1)
    ctx->pc = 0x164b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x164b84: 0x8e43021c  lw          $v1, 0x21C($s2)
    ctx->pc = 0x164b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 540)));
    // 0x164b88: 0xc6420228  lwc1        $f2, 0x228($s2)
    ctx->pc = 0x164b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164b8c: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x164b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x164b90: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x164b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x164b94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164b98: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x164b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x164b9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x164b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x164ba0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x164ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164ba4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x164ba4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x164ba8: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x164ba8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x164bac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x164bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x164bb0: 0xe6200348  swc1        $f0, 0x348($s1)
    ctx->pc = 0x164bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 840), bits); }
    // 0x164bb4: 0xc620034c  lwc1        $f0, 0x34C($s1)
    ctx->pc = 0x164bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164bb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x164bb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164bbc: 0x0  nop
    ctx->pc = 0x164bbcu;
    // NOP
    // 0x164bc0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x164BC0u;
    {
        const bool branch_taken_0x164bc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x164bc0) {
            ctx->pc = 0x164BE8u;
            goto label_164be8;
        }
    }
    ctx->pc = 0x164BC8u;
    // 0x164bc8: 0xc6200348  lwc1        $f0, 0x348($s1)
    ctx->pc = 0x164bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164bcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x164bccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164bd0: 0x0  nop
    ctx->pc = 0x164bd0u;
    // NOP
    // 0x164bd4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x164BD4u;
    {
        const bool branch_taken_0x164bd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164bd4) {
            ctx->pc = 0x164BE8u;
            goto label_164be8;
        }
    }
    ctx->pc = 0x164BDCu;
    // 0x164bdc: 0x8e420234  lw          $v0, 0x234($s2)
    ctx->pc = 0x164bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
    // 0x164be0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164be4: 0xae420234  sw          $v0, 0x234($s2)
    ctx->pc = 0x164be4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 2));
label_164be8:
    // 0x164be8: 0xc6200348  lwc1        $f0, 0x348($s1)
    ctx->pc = 0x164be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164bec: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x164becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x164bf0: 0xe620034c  swc1        $f0, 0x34C($s1)
    ctx->pc = 0x164bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 844), bits); }
    // 0x164bf4: 0x86430218  lh          $v1, 0x218($s2)
    ctx->pc = 0x164bf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 536)));
    // 0x164bf8: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x164BF8u;
    {
        const bool branch_taken_0x164bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BF8u;
        // 0x164bfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164bf8) {
            ctx->pc = 0x164C60u;
            goto label_164c60;
        }
    }
    ctx->pc = 0x164C00u;
    // 0x164c00: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x164c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x164c04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x164c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x164c08: 0xc6210348  lwc1        $f1, 0x348($s1)
    ctx->pc = 0x164c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164c0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164c10: 0xc4620058  lwc1        $f2, 0x58($v1)
    ctx->pc = 0x164c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164c14: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x164c14u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x164c18: 0x0  nop
    ctx->pc = 0x164c18u;
    // NOP
    // 0x164c1c: 0x0  nop
    ctx->pc = 0x164c1cu;
    // NOP
    // 0x164c20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164c24: 0x0  nop
    ctx->pc = 0x164c24u;
    // NOP
    // 0x164c28: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x164C28u;
    {
        const bool branch_taken_0x164c28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x164C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C28u;
        // 0x164c2c: 0x26220360  addiu       $v0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c28) {
            ctx->pc = 0x164C5Cu;
            goto label_164c5c;
        }
    }
    ctx->pc = 0x164C30u;
    // 0x164c30: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x164c30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164c34: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x164c34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164c38: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x164c38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x164c3c: 0x0  nop
    ctx->pc = 0x164c3cu;
    // NOP
    // 0x164c40: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x164c40u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x164c44: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x164c44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x164c48: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x164c48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x164c4c: 0x4be621bc  vmulax.xyzw $ACC, $vf4, $vf6x
    ctx->pc = 0x164c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x164c50: 0x4be82a48  vmaddx.xyzw $vf9, $vf5, $vf8x
    ctx->pc = 0x164c50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x164c54: 0xfa290000  sqc2        $vf9, 0x0($s1)
    ctx->pc = 0x164c54u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x164c58: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x164c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_164c5c:
    // 0x164c5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_164c60:
    // 0x164c60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x164c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_164c64:
    // 0x164c64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164c64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164c68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164c70: 0x3e00008  jr          $ra
    ctx->pc = 0x164C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C70u;
        // 0x164c74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164C78u;
}
