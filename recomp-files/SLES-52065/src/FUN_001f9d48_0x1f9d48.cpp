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

// Function: FUN_001f9d48
// Address: 0x1f9d48 - 0x1fa030
void FUN_001f9d48_0x1f9d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f9d48_0x1f9d48");
#endif

    switch (ctx->pc) {
        case 0x1f9dacu: goto label_1f9dac;
        case 0x1f9df8u: goto label_1f9df8;
        case 0x1f9f80u: goto label_1f9f80;
        case 0x1f9f88u: goto label_1f9f88;
        default: break;
    }

    ctx->pc = 0x1f9d48u;

    // 0x1f9d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9d4c: 0x44086800  mfc1        $t0, $f13
    ctx->pc = 0x1f9d4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f9d50: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1f9d50u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1f9d54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f9d58: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1f9d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d5c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1f9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1f9d60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f9d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f9d64: 0xe22824  and         $a1, $a3, $v0
    ctx->pc = 0x1f9d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1f9d68: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1f9d68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f9d6c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f9d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d70: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x1f9d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f9d74: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x1f9d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x1f9d78: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1f9d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f9d7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9D7Cu;
    {
        const bool branch_taken_0x1f9d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D7Cu;
        // 0x1f9d80: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d7c) {
            ctx->pc = 0x1F9D90u;
            goto label_1f9d90;
        }
    }
    ctx->pc = 0x1F9D84u;
    // 0x1f9d84: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1f9d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f9d88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9D88u;
    {
        const bool branch_taken_0x1f9d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D88u;
        // 0x1f9d8c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d88) {
            ctx->pc = 0x1F9D9Cu;
            goto label_1f9d9c;
        }
    }
    ctx->pc = 0x1F9D90u;
label_1f9d90:
    // 0x1f9d90: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1f9d90u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9d94: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1F9D94u;
    {
        const bool branch_taken_0x1f9d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D94u;
        // 0x1f9d98: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d94) {
            ctx->pc = 0x1FA020u;
            goto label_1fa020;
        }
    }
    ctx->pc = 0x1F9D9Cu;
label_1f9d9c:
    // 0x1f9d9c: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9D9Cu;
    {
        const bool branch_taken_0x1f9d9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D9Cu;
        // 0x1f9da0: 0x71783  sra         $v0, $a3, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d9c) {
            ctx->pc = 0x1F9DB4u;
            goto label_1f9db4;
        }
    }
    ctx->pc = 0x1F9DA4u;
    // 0x1f9da4: 0xc07ed0e  jal         func_1FB438
    ctx->pc = 0x1F9DA4u;
    SET_GPR_U32(ctx, 31, 0x1F9DACu);
    ctx->pc = 0x1F9DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9DA4u;
    // 0x1f9da8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB438u, 0x1F9DA4u, 0x1F9DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9DACu;
label_1f9dac:
    // 0x1f9dac: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1F9DACu;
    {
        const bool branch_taken_0x1f9dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DACu;
        // 0x1f9db0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9dac) {
            ctx->pc = 0x1FA024u;
            goto label_1fa024;
        }
    }
    ctx->pc = 0x1F9DB4u;
label_1f9db4:
    // 0x1f9db4: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x1f9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1f9db8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1f9db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1f9dbc: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F9DBCu;
    {
        const bool branch_taken_0x1f9dbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DBCu;
        // 0x1f9dc0: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9dbc) {
            ctx->pc = 0x1F9DF0u;
            goto label_1f9df0;
        }
    }
    ctx->pc = 0x1F9DC4u;
    // 0x1f9dc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9dc8: 0x1202004f  beq         $s0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1F9DC8u;
    {
        const bool branch_taken_0x1f9dc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DC8u;
        // 0x1f9dcc: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9dc8) {
            ctx->pc = 0x1F9F08u;
            goto label_1f9f08;
        }
    }
    ctx->pc = 0x1F9DD0u;
    // 0x1f9dd0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9DD0u;
    {
        const bool branch_taken_0x1f9dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DD0u;
        // 0x1f9dd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9dd0) {
            ctx->pc = 0x1F9DE8u;
            goto label_1f9de8;
        }
    }
    ctx->pc = 0x1F9DD8u;
    // 0x1f9dd8: 0x12020050  beq         $s0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1F9DD8u;
    {
        const bool branch_taken_0x1f9dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f9dd8) {
            ctx->pc = 0x1F9F1Cu;
            goto label_1f9f1c;
        }
    }
    ctx->pc = 0x1F9DE0u;
    // 0x1f9de0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9DE0u;
    {
        const bool branch_taken_0x1f9de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9de0) {
            ctx->pc = 0x1F9DF0u;
            goto label_1f9df0;
        }
    }
    ctx->pc = 0x1F9DE8u;
label_1f9de8:
    // 0x1f9de8: 0x601008e  bgez        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1F9DE8u;
    {
        const bool branch_taken_0x1f9de8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DE8u;
        // 0x1f9dec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9de8) {
            ctx->pc = 0x1FA024u;
            goto label_1fa024;
        }
    }
    ctx->pc = 0x1F9DF0u;
label_1f9df0:
    // 0x1f9df0: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F9DF0u;
    {
        const bool branch_taken_0x1f9df0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DF0u;
        // 0x1f9df4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9df0) {
            ctx->pc = 0x1F9E20u;
            goto label_1f9e20;
        }
    }
    ctx->pc = 0x1F9DF8u;
label_1f9df8:
    // 0x1f9df8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1f9df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1f9dfc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f9dfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f9e00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9e04: 0x4c10087  bgez        $a2, . + 4 + (0x87 << 2)
    ctx->pc = 0x1F9E04u;
    {
        const bool branch_taken_0x1f9e04 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1F9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E04u;
        // 0x1f9e08: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e04) {
            ctx->pc = 0x1FA024u;
            goto label_1fa024;
        }
    }
    ctx->pc = 0x1F9E0Cu;
    // 0x1f9e0c: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1f9e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x1f9e10: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f9e10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f9e14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9e18: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1F9E18u;
    {
        const bool branch_taken_0x1f9e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E18u;
        // 0x1f9e1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e18) {
            ctx->pc = 0x1FA028u;
            goto label_1fa028;
        }
    }
    ctx->pc = 0x1F9E20u;
label_1f9e20:
    // 0x1f9e20: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1F9E20u;
    {
        const bool branch_taken_0x1f9e20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E20u;
        // 0x1f9e24: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e20) {
            ctx->pc = 0x1F9F30u;
            goto label_1f9f30;
        }
    }
    ctx->pc = 0x1F9E28u;
    // 0x1f9e28: 0x14850023  bne         $a0, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F9E28u;
    {
        const bool branch_taken_0x1f9e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E28u;
        // 0x1f9e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e28) {
            ctx->pc = 0x1F9EB8u;
            goto label_1f9eb8;
        }
    }
    ctx->pc = 0x1F9E30u;
    // 0x1f9e30: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F9E30u;
    {
        const bool branch_taken_0x1f9e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E30u;
        // 0x1f9e34: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e30) {
            ctx->pc = 0x1F9E7Cu;
            goto label_1f9e7c;
        }
    }
    ctx->pc = 0x1F9E38u;
    // 0x1f9e38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9E38u;
    {
        const bool branch_taken_0x1f9e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E38u;
        // 0x1f9e3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e38) {
            ctx->pc = 0x1F9E50u;
            goto label_1f9e50;
        }
    }
    ctx->pc = 0x1F9E40u;
    // 0x1f9e40: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9E40u;
    {
        const bool branch_taken_0x1f9e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E40u;
        // 0x1f9e44: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e40) {
            ctx->pc = 0x1F9E68u;
            goto label_1f9e68;
        }
    }
    ctx->pc = 0x1F9E48u;
    // 0x1f9e48: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1F9E48u;
    {
        const bool branch_taken_0x1f9e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e48) {
            ctx->pc = 0x1F9F30u;
            goto label_1f9f30;
        }
    }
    ctx->pc = 0x1F9E50u;
label_1f9e50:
    // 0x1f9e50: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F9E50u;
    {
        const bool branch_taken_0x1f9e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E50u;
        // 0x1f9e54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e50) {
            ctx->pc = 0x1F9E90u;
            goto label_1f9e90;
        }
    }
    ctx->pc = 0x1F9E58u;
    // 0x1f9e58: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F9E58u;
    {
        const bool branch_taken_0x1f9e58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E58u;
        // 0x1f9e5c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e58) {
            ctx->pc = 0x1F9EA4u;
            goto label_1f9ea4;
        }
    }
    ctx->pc = 0x1F9E60u;
    // 0x1f9e60: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1F9E60u;
    {
        const bool branch_taken_0x1f9e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e60) {
            ctx->pc = 0x1F9F30u;
            goto label_1f9f30;
        }
    }
    ctx->pc = 0x1F9E68u;
label_1f9e68:
    // 0x1f9e68: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1f9e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x1f9e6c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f9e6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f9e70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9e74: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1F9E74u;
    {
        const bool branch_taken_0x1f9e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E74u;
        // 0x1f9e78: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e74) {
            ctx->pc = 0x1FA024u;
            goto label_1fa024;
        }
    }
    ctx->pc = 0x1F9E7Cu;
label_1f9e7c:
    // 0x1f9e7c: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x1f9e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x1f9e80: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f9e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f9e84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9e88: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1F9E88u;
    {
        const bool branch_taken_0x1f9e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E88u;
        // 0x1f9e8c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e88) {
            ctx->pc = 0x1FA024u;
            goto label_1fa024;
        }
    }
    ctx->pc = 0x1F9E90u;
label_1f9e90:
    // 0x1f9e90: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x1f9e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x1f9e94: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x1f9e94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x1f9e98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9e9c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1F9E9Cu;
    {
        const bool branch_taken_0x1f9e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E9Cu;
        // 0x1f9ea0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e9c) {
            ctx->pc = 0x1FA024u;
            goto label_1fa024;
        }
    }
    ctx->pc = 0x1F9EA4u;
label_1f9ea4:
    // 0x1f9ea4: 0x3c01c016  lui         $at, 0xC016
    ctx->pc = 0x1f9ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49174 << 16));
    // 0x1f9ea8: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x1f9ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x1f9eac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9eb0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1F9EB0u;
    {
        const bool branch_taken_0x1f9eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EB0u;
        // 0x1f9eb4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9eb0) {
            ctx->pc = 0x1FA024u;
            goto label_1fa024;
        }
    }
    ctx->pc = 0x1F9EB8u;
label_1f9eb8:
    // 0x1f9eb8: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9EB8u;
    {
        const bool branch_taken_0x1f9eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EB8u;
        // 0x1f9ebc: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9eb8) {
            ctx->pc = 0x1F9EFCu;
            goto label_1f9efc;
        }
    }
    ctx->pc = 0x1F9EC0u;
    // 0x1f9ec0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9EC0u;
    {
        const bool branch_taken_0x1f9ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EC0u;
        // 0x1f9ec4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ec0) {
            ctx->pc = 0x1F9ED8u;
            goto label_1f9ed8;
        }
    }
    ctx->pc = 0x1F9EC8u;
    // 0x1f9ec8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9EC8u;
    {
        const bool branch_taken_0x1f9ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EC8u;
        // 0x1f9ecc: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ec8) {
            ctx->pc = 0x1F9EF0u;
            goto label_1f9ef0;
        }
    }
    ctx->pc = 0x1F9ED0u;
    // 0x1f9ed0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F9ED0u;
    {
        const bool branch_taken_0x1f9ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ed0) {
            ctx->pc = 0x1F9F30u;
            goto label_1f9f30;
        }
    }
    ctx->pc = 0x1F9ED8u;
label_1f9ed8:
    // 0x1f9ed8: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F9ED8u;
    {
        const bool branch_taken_0x1f9ed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9ED8u;
        // 0x1f9edc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ed8) {
            ctx->pc = 0x1F9F08u;
            goto label_1f9f08;
        }
    }
    ctx->pc = 0x1F9EE0u;
    // 0x1f9ee0: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F9EE0u;
    {
        const bool branch_taken_0x1f9ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EE0u;
        // 0x1f9ee4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ee0) {
            ctx->pc = 0x1F9F1Cu;
            goto label_1f9f1c;
        }
    }
    ctx->pc = 0x1F9EE8u;
    // 0x1f9ee8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F9EE8u;
    {
        const bool branch_taken_0x1f9ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ee8) {
            ctx->pc = 0x1F9F30u;
            goto label_1f9f30;
        }
    }
    ctx->pc = 0x1F9EF0u;
label_1f9ef0:
    // 0x1f9ef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9ef4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1F9EF4u;
    {
        const bool branch_taken_0x1f9ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EF4u;
        // 0x1f9ef8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ef4) {
            ctx->pc = 0x1FA024u;
            goto label_1fa024;
        }
    }
    ctx->pc = 0x1F9EFCu;
label_1f9efc:
    // 0x1f9efc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f9f00: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1F9F00u;
    {
        const bool branch_taken_0x1f9f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F00u;
        // 0x1f9f04: 0xc44048f8  lwc1        $f0, 0x48F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f00) {
            ctx->pc = 0x1FA020u;
            goto label_1fa020;
        }
    }
    ctx->pc = 0x1F9F08u;
label_1f9f08:
    // 0x1f9f08: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f9f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f9f0c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1f9f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1f9f10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9f14: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1F9F14u;
    {
        const bool branch_taken_0x1f9f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F14u;
        // 0x1f9f18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f14) {
            ctx->pc = 0x1FA024u;
            goto label_1fa024;
        }
    }
    ctx->pc = 0x1F9F1Cu;
label_1f9f1c:
    // 0x1f9f1c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x1f9f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x1f9f20: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1f9f20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1f9f24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9f28: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1F9F28u;
    {
        const bool branch_taken_0x1f9f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F28u;
        // 0x1f9f2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f28) {
            ctx->pc = 0x1FA024u;
            goto label_1fa024;
        }
    }
    ctx->pc = 0x1F9F30u;
label_1f9f30:
    // 0x1f9f30: 0x1082ffb1  beq         $a0, $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x1F9F30u;
    {
        const bool branch_taken_0x1f9f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F30u;
        // 0x1f9f34: 0x851023  subu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f30) {
            ctx->pc = 0x1F9DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9df8;
        }
    }
    ctx->pc = 0x1F9F38u;
    // 0x1f9f38: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x1f9f38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x1f9f3c: 0x2843003d  slti        $v1, $v0, 0x3D
    ctx->pc = 0x1f9f3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1f9f40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9F40u;
    {
        const bool branch_taken_0x1f9f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9f40) {
            ctx->pc = 0x1F9F58u;
            goto label_1f9f58;
        }
    }
    ctx->pc = 0x1F9F48u;
    // 0x1f9f48: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1f9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x1f9f4c: 0x34630fdc  ori         $v1, $v1, 0xFDC
    ctx->pc = 0x1f9f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4060);
    // 0x1f9f50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F9F50u;
    {
        const bool branch_taken_0x1f9f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F50u;
        // 0x1f9f54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f50) {
            ctx->pc = 0x1F9F90u;
            goto label_1f9f90;
        }
    }
    ctx->pc = 0x1F9F58u;
label_1f9f58:
    // 0x1f9f58: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9F58u;
    {
        const bool branch_taken_0x1f9f58 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1F9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F58u;
        // 0x1f9f5c: 0x2842ffc4  slti        $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f58) {
            ctx->pc = 0x1F9F68u;
            goto label_1f9f68;
        }
    }
    ctx->pc = 0x1F9F60u;
    // 0x1f9f60: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F9F60u;
    {
        const bool branch_taken_0x1f9f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F60u;
        // 0x1f9f64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f60) {
            ctx->pc = 0x1F9F8Cu;
            goto label_1f9f8c;
        }
    }
    ctx->pc = 0x1F9F68u;
label_1f9f68:
    // 0x1f9f68: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x1f9f68u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f9f6c: 0x0  nop
    ctx->pc = 0x1f9f6cu;
    // NOP
    // 0x1f9f70: 0x0  nop
    ctx->pc = 0x1f9f70u;
    // NOP
    // 0x1f9f74: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1f9f74u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1f9f78: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x1F9F78u;
    SET_GPR_U32(ctx, 31, 0x1F9F80u);
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x1F9F78u, 0x1F9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F80u;
label_1f9f80:
    // 0x1f9f80: 0xc07ed0e  jal         func_1FB438
    ctx->pc = 0x1F9F80u;
    SET_GPR_U32(ctx, 31, 0x1F9F88u);
    ctx->pc = 0x1F9F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9F80u;
    // 0x1f9f84: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB438u, 0x1F9F80u, 0x1F9F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F88u;
label_1f9f88:
    // 0x1f9f88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1f9f88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1f9f8c:
    // 0x1f9f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9f90:
    // 0x1f9f90: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F9F90u;
    {
        const bool branch_taken_0x1f9f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F90u;
        // 0x1f9f94: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f90) {
            ctx->pc = 0x1F9FC0u;
            goto label_1f9fc0;
        }
    }
    ctx->pc = 0x1F9F98u;
    // 0x1f9f98: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9F98u;
    {
        const bool branch_taken_0x1f9f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9f98) {
            ctx->pc = 0x1F9F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9F98u;
            // 0x1f9f9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9FB0u;
            goto label_1f9fb0;
        }
    }
    ctx->pc = 0x1F9FA0u;
    // 0x1f9fa0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9FA0u;
    {
        const bool branch_taken_0x1f9fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fa0) {
            ctx->pc = 0x1F9FC8u;
            goto label_1f9fc8;
        }
    }
    ctx->pc = 0x1F9FA8u;
    // 0x1f9fa8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F9FA8u;
    {
        const bool branch_taken_0x1f9fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fa8) {
            ctx->pc = 0x1F9FFCu;
            goto label_1f9ffc;
        }
    }
    ctx->pc = 0x1F9FB0u;
label_1f9fb0:
    // 0x1f9fb0: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9FB0u;
    {
        const bool branch_taken_0x1f9fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f9fb0) {
            ctx->pc = 0x1F9FD4u;
            goto label_1f9fd4;
        }
    }
    ctx->pc = 0x1F9FB8u;
    // 0x1f9fb8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9FB8u;
    {
        const bool branch_taken_0x1f9fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fb8) {
            ctx->pc = 0x1F9FFCu;
            goto label_1f9ffc;
        }
    }
    ctx->pc = 0x1F9FC0u;
label_1f9fc0:
    // 0x1f9fc0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f9fc4: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1f9fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_1f9fc8:
    // 0x1f9fc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9fcc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F9FCCu;
    {
        const bool branch_taken_0x1f9fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FCCu;
        // 0x1f9fd0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fcc) {
            ctx->pc = 0x1FA024u;
            goto label_1fa024;
        }
    }
    ctx->pc = 0x1F9FD4u;
label_1f9fd4:
    // 0x1f9fd4: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x1f9fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x1f9fd8: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1f9fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1f9fdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9fe0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1f9fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f9fe4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f9fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f9fe8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1f9fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1f9fec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f9fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9ff0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1f9ff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1f9ff4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F9FF4u;
    {
        const bool branch_taken_0x1f9ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FF4u;
        // 0x1f9ff8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ff4) {
            ctx->pc = 0x1FA020u;
            goto label_1fa020;
        }
    }
    ctx->pc = 0x1F9FFCu;
label_1f9ffc:
    // 0x1f9ffc: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x1f9ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x1fa000: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1fa000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1fa004: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa008: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fa008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa00c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1fa00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1fa010: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1fa010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1fa014: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa018: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1fa018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1fa01c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fa01cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1fa020:
    // 0x1fa020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa024:
    // 0x1fa024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa028:
    // 0x1fa028: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA028u;
        // 0x1fa02c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA030u;
}
