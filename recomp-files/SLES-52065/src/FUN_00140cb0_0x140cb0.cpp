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

// Function: FUN_00140cb0
// Address: 0x140cb0 - 0x1416b4
void FUN_00140cb0_0x140cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00140cb0_0x140cb0");
#endif

    switch (ctx->pc) {
        case 0x140d4cu: goto label_140d4c;
        case 0x140d54u: goto label_140d54;
        case 0x140e3cu: goto label_140e3c;
        case 0x140edcu: goto label_140edc;
        case 0x140f10u: goto label_140f10;
        case 0x140f80u: goto label_140f80;
        case 0x141030u: goto label_141030;
        case 0x141068u: goto label_141068;
        case 0x14113cu: goto label_14113c;
        case 0x141200u: goto label_141200;
        case 0x1412d4u: goto label_1412d4;
        case 0x141394u: goto label_141394;
        case 0x14141cu: goto label_14141c;
        case 0x141444u: goto label_141444;
        case 0x141464u: goto label_141464;
        case 0x14146cu: goto label_14146c;
        case 0x1414d0u: goto label_1414d0;
        case 0x141544u: goto label_141544;
        case 0x14160cu: goto label_14160c;
        case 0x14167cu: goto label_14167c;
        default: break;
    }

    ctx->pc = 0x140cb0u;

    // 0x140cb0: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x140cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x140cb4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x140cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x140cb8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x140cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x140cbc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x140cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x140cc0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x140cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x140cc4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x140cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x140cc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x140cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x140ccc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140cd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x140cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140cdc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x140cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ce0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x140ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140ce4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x140ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ce8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x140ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140cec: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x140cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140cf0: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x140cf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x140cf4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x140cf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x140cf8: 0x12200264  beqz        $s1, . + 4 + (0x264 << 2)
    ctx->pc = 0x140CF8u;
    {
        const bool branch_taken_0x140cf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x140CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CF8u;
        // 0x140cfc: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140cf8) {
            ctx->pc = 0x14168Cu;
            goto label_14168c;
        }
    }
    ctx->pc = 0x140D00u;
    // 0x140d00: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x140d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x140d04: 0x27a4026c  addiu       $a0, $sp, 0x26C
    ctx->pc = 0x140d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
    // 0x140d08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x140d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x140d0c: 0xafa3026c  sw          $v1, 0x26C($sp)
    ctx->pc = 0x140d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
    // 0x140d10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x140d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140d14: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x140d14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x140d18: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x140D18u;
    {
        const bool branch_taken_0x140d18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x140d18) {
            ctx->pc = 0x140D34u;
            goto label_140d34;
        }
    }
    ctx->pc = 0x140D20u;
    // 0x140d20: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x140d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x140d24: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x140d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x140d28: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x140d28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x140d2c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x140D2Cu;
    {
        const bool branch_taken_0x140d2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140d2c) {
            ctx->pc = 0x140D54u;
            goto label_140d54;
        }
    }
    ctx->pc = 0x140D34u;
label_140d34:
    // 0x140d34: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x140d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x140d38: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x140d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x140d3c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x140d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x140d40: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x140d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x140d44: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x140D44u;
    SET_GPR_U32(ctx, 31, 0x140D4Cu);
    ctx->pc = 0x140D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D44u;
    // 0x140d48: 0x24a5f100  addiu       $a1, $a1, -0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x140D44u, 0x140D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D4Cu;
label_140d4c:
    // 0x140d4c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x140D4Cu;
    SET_GPR_U32(ctx, 31, 0x140D54u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x140D4Cu, 0x140D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D54u;
label_140d54:
    // 0x140d54: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x140d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x140d58: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x140d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x140d5c: 0x71b021  addu        $s6, $v1, $s1
    ctx->pc = 0x140d5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x140d60: 0xf6082b  sltu        $at, $a3, $s6
    ctx->pc = 0x140d60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x140d64: 0x142001a4  bnez        $at, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x140D64u;
    {
        const bool branch_taken_0x140d64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x140d64) {
            ctx->pc = 0x1413F8u;
            goto label_1413f8;
        }
    }
    ctx->pc = 0x140D6Cu;
    // 0x140d6c: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x140d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x140d70: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x140d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x140d74: 0x1034821  addu        $t1, $t0, $v1
    ctx->pc = 0x140d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x140d78: 0x127082b  sltu        $at, $t1, $a3
    ctx->pc = 0x140d78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x140d7c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x140D7Cu;
    {
        const bool branch_taken_0x140d7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x140D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D7Cu;
        // 0x140d80: 0xc09821  addu        $s3, $a2, $zero (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d7c) {
            ctx->pc = 0x140DA0u;
            goto label_140da0;
        }
    }
    ctx->pc = 0x140D84u;
    // 0x140d84: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x140d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x140d88: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x140d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x140d8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x140d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x140d90: 0xafb200a0  sw          $s2, 0xA0($sp)
    ctx->pc = 0x140d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 18));
    // 0x140d94: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x140d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x140d98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x140D98u;
    {
        const bool branch_taken_0x140d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D98u;
        // 0x140d9c: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d98) {
            ctx->pc = 0x140DBCu;
            goto label_140dbc;
        }
    }
    ctx->pc = 0x140DA0u;
label_140da0:
    // 0x140da0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x140da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x140da4: 0x1272823  subu        $a1, $t1, $a3
    ctx->pc = 0x140da4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x140da8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x140da8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x140dac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x140dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x140db0: 0xafb200a0  sw          $s2, 0xA0($sp)
    ctx->pc = 0x140db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 18));
    // 0x140db4: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x140db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x140db8: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x140db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_140dbc:
    // 0x140dbc: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x140dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x140dc0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x140dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x140dc4: 0x264082b  sltu        $at, $s3, $a0
    ctx->pc = 0x140dc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x140dc8: 0x102000be  beqz        $at, . + 4 + (0xBE << 2)
    ctx->pc = 0x140DC8u;
    {
        const bool branch_taken_0x140dc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140dc8) {
            ctx->pc = 0x1410C4u;
            goto label_1410c4;
        }
    }
    ctx->pc = 0x140DD0u;
    // 0x140dd0: 0x111182b  sltu        $v1, $t0, $s1
    ctx->pc = 0x140dd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x140dd4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x140DD4u;
    {
        const bool branch_taken_0x140dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x140DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DD4u;
        // 0x140dd8: 0x2281823  subu        $v1, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140dd4) {
            ctx->pc = 0x140DECu;
            goto label_140dec;
        }
    }
    ctx->pc = 0x140DDCu;
    // 0x140ddc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x140ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x140de0: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x140de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x140de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x140DE4u;
    {
        const bool branch_taken_0x140de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DE4u;
        // 0x140de8: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140de4) {
            ctx->pc = 0x140DF4u;
            goto label_140df4;
        }
    }
    ctx->pc = 0x140DECu;
label_140dec:
    // 0x140dec: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x140decu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x140df0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x140df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_140df4:
    // 0x140df4: 0x16600027  bnez        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x140DF4u;
    {
        const bool branch_taken_0x140df4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x140df4) {
            ctx->pc = 0x140E94u;
            goto label_140e94;
        }
    }
    ctx->pc = 0x140DFCu;
    // 0x140dfc: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x140dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x140e00: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x140e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x140e04: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x140e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x140e08: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x140e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x140e0c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x140e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e10: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x140e10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x140e14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x140e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x140e18: 0xafb200b0  sw          $s2, 0xB0($sp)
    ctx->pc = 0x140e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 18));
    // 0x140e1c: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x140e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x140e20: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x140e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x140e24: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x140e24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140e28: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x140e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140e2c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x140e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x140e30: 0x1220016c  beqz        $s1, . + 4 + (0x16C << 2)
    ctx->pc = 0x140E30u;
    {
        const bool branch_taken_0x140e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x140E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E30u;
        // 0x140e34: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e30) {
            ctx->pc = 0x1413E4u;
            goto label_1413e4;
        }
    }
    ctx->pc = 0x140E38u;
    // 0x140e38: 0x27a60158  addiu       $a2, $sp, 0x158
    ctx->pc = 0x140e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_140e3c:
    // 0x140e3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x140e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140e40: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x140e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140e44: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x140e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x140e48: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x140e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x140e4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x140e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x140e50: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x140e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x140e54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x140e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140e58: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x140e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x140e5c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x140e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x140e60: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x140e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x140e64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x140e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140e68: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x140e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x140e6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140e70: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x140e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x140e74: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x140E74u;
    {
        const bool branch_taken_0x140e74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x140e74) {
            ctx->pc = 0x140E80u;
            goto label_140e80;
        }
    }
    ctx->pc = 0x140E7Cu;
    // 0x140e7c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x140e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_140e80:
    // 0x140e80: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x140e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x140e84: 0x14e0ffed  bnez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x140E84u;
    {
        const bool branch_taken_0x140e84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x140e84) {
            ctx->pc = 0x140E3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140e3c;
        }
    }
    ctx->pc = 0x140E8Cu;
    // 0x140e8c: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x140E8Cu;
    {
        const bool branch_taken_0x140e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140e8c) {
            ctx->pc = 0x1413E4u;
            goto label_1413e4;
        }
    }
    ctx->pc = 0x140E94u;
label_140e94:
    // 0x140e94: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x140e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x140e98: 0x27a60094  addiu       $a2, $sp, 0x94
    ctx->pc = 0x140e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x140e9c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x140e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x140ea0: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x140ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x140ea4: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x140ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x140ea8: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x140ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x140eac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140eb0: 0xafb20090  sw          $s2, 0x90($sp)
    ctx->pc = 0x140eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 18));
    // 0x140eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140eb8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x140eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x140ebc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x140ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x140ec0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x140ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x140ec4: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x140ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x140ec8: 0x8cd40000  lw          $s4, 0x0($a2)
    ctx->pc = 0x140ec8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140ecc: 0xafb40234  sw          $s4, 0x234($sp)
    ctx->pc = 0x140eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 20));
    // 0x140ed0: 0x8cf50000  lw          $s5, 0x0($a3)
    ctx->pc = 0x140ed0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140ed4: 0xc050184  jal         func_140610
    ctx->pc = 0x140ED4u;
    SET_GPR_U32(ctx, 31, 0x140EDCu);
    ctx->pc = 0x140ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140ED4u;
    // 0x140ed8: 0xafb50238  sw          $s5, 0x238($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x140ED4u, 0x140EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140EDCu;
label_140edc:
    // 0x140edc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x140edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140ee0: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x140ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x140ee4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x140ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x140ee8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x140ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140eec: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x140eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x140ef0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x140ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x140ef4: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x140ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x140ef8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x140ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x140efc: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x140efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x140f00: 0xafa30240  sw          $v1, 0x240($sp)
    ctx->pc = 0x140f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 3));
    // 0x140f04: 0xafb40244  sw          $s4, 0x244($sp)
    ctx->pc = 0x140f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 20));
    // 0x140f08: 0xc050184  jal         func_140610
    ctx->pc = 0x140F08u;
    SET_GPR_U32(ctx, 31, 0x140F10u);
    ctx->pc = 0x140F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140F08u;
    // 0x140f0c: 0xafb50248  sw          $s5, 0x248($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x140F08u, 0x140F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F10u;
label_140f10:
    // 0x140f10: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x140f10u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140f14: 0x27ab00c0  addiu       $t3, $sp, 0xC0
    ctx->pc = 0x140f14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x140f18: 0x27aa0180  addiu       $t2, $sp, 0x180
    ctx->pc = 0x140f18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x140f1c: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x140f1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x140f20: 0x27a80170  addiu       $t0, $sp, 0x170
    ctx->pc = 0x140f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x140f24: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x140f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x140f28: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x140f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x140f2c: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x140f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x140f30: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x140f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x140f34: 0x27a30184  addiu       $v1, $sp, 0x184
    ctx->pc = 0x140f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x140f38: 0xafac00c0  sw          $t4, 0xC0($sp)
    ctx->pc = 0x140f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 12));
    // 0x140f3c: 0x8c4c0004  lw          $t4, 0x4($v0)
    ctx->pc = 0x140f3cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x140f40: 0xafac00c4  sw          $t4, 0xC4($sp)
    ctx->pc = 0x140f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 12));
    // 0x140f44: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x140f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x140f48: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x140f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x140f4c: 0xdd620000  ld          $v0, 0x0($t3)
    ctx->pc = 0x140f4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x140f50: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x140f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140f54: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x140f54u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x140f58: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x140f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x140f5c: 0xdd220000  ld          $v0, 0x0($t1)
    ctx->pc = 0x140f5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140f60: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x140f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140f64: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x140f64u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x140f68: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x140f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x140f6c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x140f6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140f70: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x140f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140f74: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x140f74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x140f78: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x140F78u;
    {
        const bool branch_taken_0x140f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F78u;
        // 0x140f7c: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f78) {
            ctx->pc = 0x141000u;
            goto label_141000;
        }
    }
    ctx->pc = 0x140F80u;
label_140f80:
    // 0x140f80: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x140f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140f84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x140f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140f88: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x140f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140f8c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x140f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x140f90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140f94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140f98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x140f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x140f9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x140f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140fa0: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x140fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x140fa4: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x140fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x140fa8: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x140fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x140fac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x140facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140fb0: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x140fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x140fb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140fb8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x140fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x140fbc: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x140FBCu;
    {
        const bool branch_taken_0x140fbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x140fbc) {
            ctx->pc = 0x140FC8u;
            goto label_140fc8;
        }
    }
    ctx->pc = 0x140FC4u;
    // 0x140fc4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x140fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_140fc8:
    // 0x140fc8: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x140fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x140fcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140fd0: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x140fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x140fd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x140fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140fd8: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x140fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x140fdc: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x140fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x140fe0: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x140fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x140fe4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x140fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140fe8: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x140fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x140fec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140ff0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x140ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x140ff4: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x140FF4u;
    {
        const bool branch_taken_0x140ff4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x140ff4) {
            ctx->pc = 0x141000u;
            goto label_141000;
        }
    }
    ctx->pc = 0x140FFCu;
    // 0x140ffc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x140ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_141000:
    // 0x141000: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x141000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141004: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x141004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x141008: 0x14c2ffdd  bne         $a2, $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x141008u;
    {
        const bool branch_taken_0x141008 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x141008) {
            ctx->pc = 0x140F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140f80;
        }
    }
    ctx->pc = 0x141010u;
    // 0x141010: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x141010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x141014: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x141014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141018: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x141018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x14101c: 0xafb40254  sw          $s4, 0x254($sp)
    ctx->pc = 0x14101cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 20));
    // 0x141020: 0xafb50258  sw          $s5, 0x258($sp)
    ctx->pc = 0x141020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 21));
    // 0x141024: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x141024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141028: 0xc050184  jal         func_140610
    ctx->pc = 0x141028u;
    SET_GPR_U32(ctx, 31, 0x141030u);
    ctx->pc = 0x14102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141028u;
    // 0x14102c: 0xafa20250  sw          $v0, 0x250($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x141028u, 0x141030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141030u;
label_141030:
    // 0x141030: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x141030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141034: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x141034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x141038: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x141038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x14103c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x14103cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x141040: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x141040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x141044: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x141044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x141048: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x141048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14104c: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x14104cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x141050: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x141050u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x141054: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x141054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141058: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x141058u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x14105c: 0x122000e1  beqz        $s1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x14105Cu;
    {
        const bool branch_taken_0x14105c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x141060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14105Cu;
        // 0x141060: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14105c) {
            ctx->pc = 0x1413E4u;
            goto label_1413e4;
        }
    }
    ctx->pc = 0x141064u;
    // 0x141064: 0x27a60198  addiu       $a2, $sp, 0x198
    ctx->pc = 0x141064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_141068:
    // 0x141068: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x141068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14106c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141070: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x141070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x141074: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x141074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x141078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x141078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14107c: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x14107cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
    // 0x141080: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x141080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141084: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x141084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x141088: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x141088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x14108c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x14108cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x141090: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x141090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x141094: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x141094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x141098: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14109c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14109cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1410a0: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1410A0u;
    {
        const bool branch_taken_0x1410a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1410a0) {
            ctx->pc = 0x1410ACu;
            goto label_1410ac;
        }
    }
    ctx->pc = 0x1410A8u;
    // 0x1410a8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1410a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_1410ac:
    // 0x1410ac: 0x0  nop
    ctx->pc = 0x1410acu;
    // NOP
    // 0x1410b0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1410b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1410b4: 0x1660ffec  bnez        $s3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1410B4u;
    {
        const bool branch_taken_0x1410b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1410b4) {
            ctx->pc = 0x141068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141068;
        }
    }
    ctx->pc = 0x1410BCu;
    // 0x1410bc: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1410BCu;
    {
        const bool branch_taken_0x1410bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1410bc) {
            ctx->pc = 0x1413E4u;
            goto label_1413e4;
        }
    }
    ctx->pc = 0x1410C4u;
label_1410c4:
    // 0x1410c4: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1410C4u;
    {
        const bool branch_taken_0x1410c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1410C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410C4u;
        // 0x1410c8: 0x127082b  sltu        $at, $t1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410c4) {
            ctx->pc = 0x141194u;
            goto label_141194;
        }
    }
    ctx->pc = 0x1410CCu;
    // 0x1410cc: 0x127082b  sltu        $at, $t1, $a3
    ctx->pc = 0x1410ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1410d0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1410D0u;
    {
        const bool branch_taken_0x1410d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410D0u;
        // 0x1410d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410d0) {
            ctx->pc = 0x1410F8u;
            goto label_1410f8;
        }
    }
    ctx->pc = 0x1410D8u;
    // 0x1410d8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1410d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1410dc: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x1410dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1410e0: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x1410e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1410e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1410e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1410e8: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x1410e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x1410ec: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x1410ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x1410f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1410F0u;
    {
        const bool branch_taken_0x1410f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410F0u;
        // 0x1410f4: 0xafb200f0  sw          $s2, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410f0) {
            ctx->pc = 0x141118u;
            goto label_141118;
        }
    }
    ctx->pc = 0x1410F8u;
label_1410f8:
    // 0x1410f8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1410f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1410fc: 0x1272823  subu        $a1, $t1, $a3
    ctx->pc = 0x1410fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x141100: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x141100u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x141104: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x141104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x141108: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x141108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14110c: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x14110cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x141110: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x141110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x141114: 0xafb200f0  sw          $s2, 0xF0($sp)
    ctx->pc = 0x141114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 18));
label_141118:
    // 0x141118: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x141118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14111c: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x14111cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x141120: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x141120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141124: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x141124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141128: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x141128u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14112c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x14112cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x141130: 0x122000ac  beqz        $s1, . + 4 + (0xAC << 2)
    ctx->pc = 0x141130u;
    {
        const bool branch_taken_0x141130 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x141134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141130u;
        // 0x141134: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141130) {
            ctx->pc = 0x1413E4u;
            goto label_1413e4;
        }
    }
    ctx->pc = 0x141138u;
    // 0x141138: 0x27a701a8  addiu       $a3, $sp, 0x1A8
    ctx->pc = 0x141138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_14113c:
    // 0x14113c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141140: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x141140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x141144: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x141144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x141148: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x141148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x14114c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14114cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x141150: 0xafa301a4  sw          $v1, 0x1A4($sp)
    ctx->pc = 0x141150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 3));
    // 0x141154: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x141154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x141158: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x141158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14115c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x14115cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x141160: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x141160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x141164: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x141164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x141168: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x141168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14116c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14116cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141170: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x141170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x141174: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x141174u;
    {
        const bool branch_taken_0x141174 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x141174) {
            ctx->pc = 0x141180u;
            goto label_141180;
        }
    }
    ctx->pc = 0x14117Cu;
    // 0x14117c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x14117cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_141180:
    // 0x141180: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x141180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x141184: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x141184u;
    {
        const bool branch_taken_0x141184 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x141184) {
            ctx->pc = 0x14113Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14113c;
        }
    }
    ctx->pc = 0x14118Cu;
    // 0x14118c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x14118Cu;
    {
        const bool branch_taken_0x14118c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14118c) {
            ctx->pc = 0x1413E4u;
            goto label_1413e4;
        }
    }
    ctx->pc = 0x141194u;
label_141194:
    // 0x141194: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x141194u;
    {
        const bool branch_taken_0x141194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141194) {
            ctx->pc = 0x1411BCu;
            goto label_1411bc;
        }
    }
    ctx->pc = 0x14119Cu;
    // 0x14119c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x14119cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1411a0: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x1411a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1411a4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1411a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1411a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1411a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1411ac: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x1411acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x1411b0: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x1411b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x1411b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1411B4u;
    {
        const bool branch_taken_0x1411b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411B4u;
        // 0x1411b8: 0xafb20120  sw          $s2, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411b4) {
            ctx->pc = 0x1411DCu;
            goto label_1411dc;
        }
    }
    ctx->pc = 0x1411BCu;
label_1411bc:
    // 0x1411bc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1411bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1411c0: 0x1272023  subu        $a0, $t1, $a3
    ctx->pc = 0x1411c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1411c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1411c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1411c8: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1411c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1411cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1411ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1411d0: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x1411d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x1411d4: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x1411d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x1411d8: 0xafb20120  sw          $s2, 0x120($sp)
    ctx->pc = 0x1411d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 18));
label_1411dc:
    // 0x1411dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1411dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1411e0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1411e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1411e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1411e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1411e8: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x1411e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x1411ec: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1411ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1411f0: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x1411f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
    // 0x1411f4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1411f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1411f8: 0xc050184  jal         func_140610
    ctx->pc = 0x1411F8u;
    SET_GPR_U32(ctx, 31, 0x141200u);
    ctx->pc = 0x1411FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1411F8u;
    // 0x1411fc: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x1411F8u, 0x141200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141200u;
label_141200:
    // 0x141200: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x141200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141204: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x141204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x141208: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x141208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14120c: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x14120cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
    // 0x141210: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x141210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x141214: 0xafa30118  sw          $v1, 0x118($sp)
    ctx->pc = 0x141214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
    // 0x141218: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x141218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14121c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x141220: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x141220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x141224: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x141224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x141228: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x141228u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14122c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14122Cu;
    {
        const bool branch_taken_0x14122c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x141230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14122Cu;
        // 0x141230: 0x27aa0110  addiu       $t2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14122c) {
            ctx->pc = 0x141254u;
            goto label_141254;
        }
    }
    ctx->pc = 0x141234u;
    // 0x141234: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x141234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141238: 0x27ab0100  addiu       $t3, $sp, 0x100
    ctx->pc = 0x141238u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14123c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x14123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x141240: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x141240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141244: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x141244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
    // 0x141248: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x141248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x14124c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14124Cu;
    {
        const bool branch_taken_0x14124c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14124Cu;
        // 0x141250: 0xafb20100  sw          $s2, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14124c) {
            ctx->pc = 0x141274u;
            goto label_141274;
        }
    }
    ctx->pc = 0x141254u;
label_141254:
    // 0x141254: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x141254u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141258: 0x27ab0100  addiu       $t3, $sp, 0x100
    ctx->pc = 0x141258u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14125c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x14125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x141260: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x141260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x141264: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x141264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141268: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x141268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
    // 0x14126c: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x14126cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x141270: 0xafb20100  sw          $s2, 0x100($sp)
    ctx->pc = 0x141270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 18));
label_141274:
    // 0x141274: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x141274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x141278: 0x27a901d0  addiu       $t1, $sp, 0x1D0
    ctx->pc = 0x141278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x14127c: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x14127cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141280: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x141280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141284: 0x27a701c0  addiu       $a3, $sp, 0x1C0
    ctx->pc = 0x141284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x141288: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x141288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x14128c: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x14128cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x141290: 0x27a401c4  addiu       $a0, $sp, 0x1C4
    ctx->pc = 0x141290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x141294: 0xfd280000  sd          $t0, 0x0($t1)
    ctx->pc = 0x141294u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 8));
    // 0x141298: 0x27a301b8  addiu       $v1, $sp, 0x1B8
    ctx->pc = 0x141298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x14129c: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x14129cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1412a0: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x1412a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1412a4: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x1412a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1412a8: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x1412a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1412ac: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x1412acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1412b0: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x1412b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1412b4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1412b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1412b8: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x1412b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1412bc: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x1412bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1412c0: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x1412c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1412c4: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x1412c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1412c8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1412c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1412cc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1412CCu;
    {
        const bool branch_taken_0x1412cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1412D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412CCu;
        // 0x1412d0: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412cc) {
            ctx->pc = 0x141360u;
            goto label_141360;
        }
    }
    ctx->pc = 0x1412D4u;
label_1412d4:
    // 0x1412d4: 0x8fa701b4  lw          $a3, 0x1B4($sp)
    ctx->pc = 0x1412d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1412d8: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x1412d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1412dc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1412dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1412e0: 0xafa701b4  sw          $a3, 0x1B4($sp)
    ctx->pc = 0x1412e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 7));
    // 0x1412e4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1412e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1412e8: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x1412e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1412ec: 0x14e80005  bne         $a3, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1412ECu;
    {
        const bool branch_taken_0x1412ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1412ec) {
            ctx->pc = 0x141304u;
            goto label_141304;
        }
    }
    ctx->pc = 0x1412F4u;
    // 0x1412f4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1412f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1412f8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1412f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1412fc: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1412fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x141300: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x141300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_141304:
    // 0x141304: 0x0  nop
    ctx->pc = 0x141304u;
    // NOP
    // 0x141308: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x141308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14130c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x14130cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x141310: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x141310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x141314: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x141314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x141318: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x141318u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14131c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x14131cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x141320: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x141320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x141324: 0x8fa601c0  lw          $a2, 0x1C0($sp)
    ctx->pc = 0x141324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x141328: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x141328u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14132c: 0x8cc9000c  lw          $t1, 0xC($a2)
    ctx->pc = 0x14132cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x141330: 0x14e90005  bne         $a3, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x141330u;
    {
        const bool branch_taken_0x141330 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        if (branch_taken_0x141330) {
            ctx->pc = 0x141348u;
            goto label_141348;
        }
    }
    ctx->pc = 0x141338u;
    // 0x141338: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x141338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14133c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x14133cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x141340: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x141340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x141344: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x141344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_141348:
    // 0x141348: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x141348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14134c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x14134cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x141350: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x141350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x141354: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x141354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x141358: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x141358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14135c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x14135cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_141360:
    // 0x141360: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x141360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x141364: 0x8fa601d4  lw          $a2, 0x1D4($sp)
    ctx->pc = 0x141364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x141368: 0x14e6ffda  bne         $a3, $a2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x141368u;
    {
        const bool branch_taken_0x141368 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x141368) {
            ctx->pc = 0x1412D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1412d4;
        }
    }
    ctx->pc = 0x141370u;
    // 0x141370: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x141370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x141374: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x141374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x141378: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x141378u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14137c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x14137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141380: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x141380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141384: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x141384u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x141388: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x141388u;
    {
        const bool branch_taken_0x141388 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141388u;
        // 0x14138c: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141388) {
            ctx->pc = 0x1413E4u;
            goto label_1413e4;
        }
    }
    ctx->pc = 0x141390u;
    // 0x141390: 0x27a701e8  addiu       $a3, $sp, 0x1E8
    ctx->pc = 0x141390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_141394:
    // 0x141394: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x141394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141398: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x141398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14139c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14139cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1413a0: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x1413a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1413a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1413a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1413a8: 0xafa301e4  sw          $v1, 0x1E4($sp)
    ctx->pc = 0x1413a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 3));
    // 0x1413ac: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1413acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1413b0: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1413b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1413b4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1413b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1413b8: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1413b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1413bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1413bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1413c0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1413c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1413c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1413c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1413c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1413c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1413cc: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1413CCu;
    {
        const bool branch_taken_0x1413cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1413cc) {
            ctx->pc = 0x1413D8u;
            goto label_1413d8;
        }
    }
    ctx->pc = 0x1413D4u;
    // 0x1413d4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1413d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_1413d8:
    // 0x1413d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1413d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1413dc: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1413DCu;
    {
        const bool branch_taken_0x1413dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1413dc) {
            ctx->pc = 0x141394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141394;
        }
    }
    ctx->pc = 0x1413E4u;
label_1413e4:
    // 0x1413e4: 0x0  nop
    ctx->pc = 0x1413e4u;
    // NOP
    // 0x1413e8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1413e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1413ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1413ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1413f0: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1413F0u;
    {
        const bool branch_taken_0x1413f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1413F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413F0u;
        // 0x1413f4: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413f0) {
            ctx->pc = 0x14168Cu;
            goto label_14168c;
        }
    }
    ctx->pc = 0x1413F8u;
label_1413f8:
    // 0x1413f8: 0x8f8280a0  lw          $v0, -0x7F60($gp)
    ctx->pc = 0x1413f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x1413fc: 0xe2082b  sltu        $at, $a3, $v0
    ctx->pc = 0x1413fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x141400: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x141400u;
    {
        const bool branch_taken_0x141400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x141404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141400u;
        // 0x141404: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141400) {
            ctx->pc = 0x14140Cu;
            goto label_14140c;
        }
    }
    ctx->pc = 0x141408u;
    // 0x141408: 0x278280a0  addiu       $v0, $gp, -0x7F60
    ctx->pc = 0x141408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934688));
label_14140c:
    // 0x14140c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x14140cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141410: 0x276082b  sltu        $at, $s3, $s6
    ctx->pc = 0x141410u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x141414: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x141414u;
    {
        const bool branch_taken_0x141414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141414) {
            ctx->pc = 0x141438u;
            goto label_141438;
        }
    }
    ctx->pc = 0x14141Cu;
label_14141c:
    // 0x14141c: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x14141cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x141420: 0x276082b  sltu        $at, $s3, $s6
    ctx->pc = 0x141420u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x141424: 0x0  nop
    ctx->pc = 0x141424u;
    // NOP
    // 0x141428: 0x0  nop
    ctx->pc = 0x141428u;
    // NOP
    // 0x14142c: 0x0  nop
    ctx->pc = 0x14142cu;
    // NOP
    // 0x141430: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141430u;
    {
        const bool branch_taken_0x141430 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x141430) {
            ctx->pc = 0x14141Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14141c;
        }
    }
    ctx->pc = 0x141438u;
label_141438:
    // 0x141438: 0x8fb50084  lw          $s5, 0x84($sp)
    ctx->pc = 0x141438u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x14143c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14143Cu;
    SET_GPR_U32(ctx, 31, 0x141444u);
    ctx->pc = 0x141440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14143Cu;
    // 0x141440: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14143Cu, 0x141444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141444u;
label_141444:
    // 0x141444: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x141444u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141448: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x141448u;
    {
        const bool branch_taken_0x141448 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x14144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141448u;
        // 0x14144c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141448) {
            ctx->pc = 0x14146Cu;
            goto label_14146c;
        }
    }
    ctx->pc = 0x141450u;
    // 0x141450: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x141450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x141454: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x141454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x141458: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x141458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14145c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14145Cu;
    SET_GPR_U32(ctx, 31, 0x141464u);
    ctx->pc = 0x141460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14145Cu;
    // 0x141460: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14145Cu, 0x141464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141464u;
label_141464:
    // 0x141464: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x141464u;
    SET_GPR_U32(ctx, 31, 0x14146Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x141464u, 0x14146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14146Cu;
label_14146c:
    // 0x14146c: 0x12a00030  beqz        $s5, . + 4 + (0x30 << 2)
    ctx->pc = 0x14146Cu;
    {
        const bool branch_taken_0x14146c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x14146c) {
            ctx->pc = 0x141530u;
            goto label_141530;
        }
    }
    ctx->pc = 0x141474u;
    // 0x141474: 0x8e4b0008  lw          $t3, 0x8($s2)
    ctx->pc = 0x141474u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x141478: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x141478u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14147c: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x14147cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x141480: 0x27a90200  addiu       $t1, $sp, 0x200
    ctx->pc = 0x141480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x141484: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x141484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x141488: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x141488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x14148c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x14148cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141490: 0x27a50208  addiu       $a1, $sp, 0x208
    ctx->pc = 0x141490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x141494: 0x27a40204  addiu       $a0, $sp, 0x204
    ctx->pc = 0x141494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x141498: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x141498u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x14149c: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x14149cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1414a0: 0xafb20130  sw          $s2, 0x130($sp)
    ctx->pc = 0x1414a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 18));
    // 0x1414a4: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x1414a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x1414a8: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x1414a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x1414ac: 0xdd460000  ld          $a2, 0x0($t2)
    ctx->pc = 0x1414acu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1414b0: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x1414b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1414b4: 0xfd260000  sd          $a2, 0x0($t1)
    ctx->pc = 0x1414b4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 6));
    // 0x1414b8: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x1414b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1414bc: 0xdd060000  ld          $a2, 0x0($t0)
    ctx->pc = 0x1414bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1414c0: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1414c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1414c4: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x1414c4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x1414c8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1414C8u;
    {
        const bool branch_taken_0x1414c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1414CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414C8u;
        // 0x1414cc: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414c8) {
            ctx->pc = 0x14151Cu;
            goto label_14151c;
        }
    }
    ctx->pc = 0x1414D0u;
label_1414d0:
    // 0x1414d0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1414d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1414d4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1414d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1414d8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1414d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1414dc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1414dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1414e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1414e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1414e4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1414e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1414e8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1414e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1414ec: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x1414ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1414f0: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x1414f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1414f4: 0x8fa70200  lw          $a3, 0x200($sp)
    ctx->pc = 0x1414f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1414f8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1414f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1414fc: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x1414fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x141500: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x141500u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x141504: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x141504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x141508: 0x15060002  bne         $t0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x141508u;
    {
        const bool branch_taken_0x141508 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x141508) {
            ctx->pc = 0x141514u;
            goto label_141514;
        }
    }
    ctx->pc = 0x141510u;
    // 0x141510: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x141510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_141514:
    // 0x141514: 0x0  nop
    ctx->pc = 0x141514u;
    // NOP
    // 0x141518: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x141518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_14151c:
    // 0x14151c: 0x0  nop
    ctx->pc = 0x14151cu;
    // NOP
    // 0x141520: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x141520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x141524: 0x8fa601f4  lw          $a2, 0x1F4($sp)
    ctx->pc = 0x141524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x141528: 0x14e6ffe9  bne         $a3, $a2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x141528u;
    {
        const bool branch_taken_0x141528 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x141528) {
            ctx->pc = 0x1414D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1414d0;
        }
    }
    ctx->pc = 0x141530u;
label_141530:
    // 0x141530: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x141530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x141534: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x141534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x141538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x141538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14153c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14153Cu;
    {
        const bool branch_taken_0x14153c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x141540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14153Cu;
        // 0x141540: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14153c) {
            ctx->pc = 0x141560u;
            goto label_141560;
        }
    }
    ctx->pc = 0x141544u;
label_141544:
    // 0x141544: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x141544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141548: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x141548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14154c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14154cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x141550: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x141550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x141554: 0x0  nop
    ctx->pc = 0x141554u;
    // NOP
    // 0x141558: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141558u;
    {
        const bool branch_taken_0x141558 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x141558) {
            ctx->pc = 0x141544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141544;
        }
    }
    ctx->pc = 0x141560u;
label_141560:
    // 0x141560: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x141560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x141564: 0x2a7082b  sltu        $at, $s5, $a3
    ctx->pc = 0x141564u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x141568: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x141568u;
    {
        const bool branch_taken_0x141568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141568) {
            ctx->pc = 0x141668u;
            goto label_141668;
        }
    }
    ctx->pc = 0x141570u;
    // 0x141570: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x141570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x141574: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x141574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x141578: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x141578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14157c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x14157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x141580: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x141580u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x141584: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x141584u;
    {
        const bool branch_taken_0x141584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x141588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141584u;
        // 0x141588: 0xc31821  addu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141584) {
            ctx->pc = 0x1415ACu;
            goto label_1415ac;
        }
    }
    ctx->pc = 0x14158Cu;
    // 0x14158c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x14158cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x141590: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x141590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x141594: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x141594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x141598: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x141598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14159c: 0xafa70144  sw          $a3, 0x144($sp)
    ctx->pc = 0x14159cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 7));
    // 0x1415a0: 0xafa40148  sw          $a0, 0x148($sp)
    ctx->pc = 0x1415a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 4));
    // 0x1415a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1415A4u;
    {
        const bool branch_taken_0x1415a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415A4u;
        // 0x1415a8: 0xafb20140  sw          $s2, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415a4) {
            ctx->pc = 0x1415CCu;
            goto label_1415cc;
        }
    }
    ctx->pc = 0x1415ACu;
label_1415ac:
    // 0x1415ac: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x1415acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1415b0: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x1415b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1415b4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1415b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1415b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1415b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1415bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1415bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1415c0: 0xafa70144  sw          $a3, 0x144($sp)
    ctx->pc = 0x1415c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 7));
    // 0x1415c4: 0xafa40148  sw          $a0, 0x148($sp)
    ctx->pc = 0x1415c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 4));
    // 0x1415c8: 0xafb20140  sw          $s2, 0x140($sp)
    ctx->pc = 0x1415c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 18));
label_1415cc:
    // 0x1415cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1415ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1415d0: 0x27a80220  addiu       $t0, $sp, 0x220
    ctx->pc = 0x1415d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1415d4: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x1415d4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1415d8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1415d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1415dc: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x1415dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1415e0: 0x27a50228  addiu       $a1, $sp, 0x228
    ctx->pc = 0x1415e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x1415e4: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x1415e4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x1415e8: 0x27a40224  addiu       $a0, $sp, 0x224
    ctx->pc = 0x1415e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
    // 0x1415ec: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x1415ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x1415f0: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x1415f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1415f4: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x1415f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1415f8: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x1415f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1415fc: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x1415fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x141600: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x141600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x141604: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x141604u;
    {
        const bool branch_taken_0x141604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141604u;
        // 0x141608: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141604) {
            ctx->pc = 0x141654u;
            goto label_141654;
        }
    }
    ctx->pc = 0x14160Cu;
label_14160c:
    // 0x14160c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x14160cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x141610: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x141610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141614: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x141614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x141618: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x141618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14161c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14161cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x141620: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x141620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x141624: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x141624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x141628: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x141628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x14162c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x14162cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x141630: 0x8fa70220  lw          $a3, 0x220($sp)
    ctx->pc = 0x141630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x141634: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x141634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x141638: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x141638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x14163c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x14163cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x141640: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x141640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x141644: 0x15060002  bne         $t0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x141644u;
    {
        const bool branch_taken_0x141644 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x141644) {
            ctx->pc = 0x141650u;
            goto label_141650;
        }
    }
    ctx->pc = 0x14164Cu;
    // 0x14164c: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x14164cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_141650:
    // 0x141650: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x141650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_141654:
    // 0x141654: 0x0  nop
    ctx->pc = 0x141654u;
    // NOP
    // 0x141658: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x141658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14165c: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x14165cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x141660: 0x14e6ffea  bne         $a3, $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x141660u;
    {
        const bool branch_taken_0x141660 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x141660) {
            ctx->pc = 0x14160Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14160c;
        }
    }
    ctx->pc = 0x141668u;
label_141668:
    // 0x141668: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x141668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14166c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14166Cu;
    {
        const bool branch_taken_0x14166c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14166c) {
            ctx->pc = 0x14167Cu;
            goto label_14167c;
        }
    }
    ctx->pc = 0x141674u;
    // 0x141674: 0xc0401a4  jal         func_100690
    ctx->pc = 0x141674u;
    SET_GPR_U32(ctx, 31, 0x14167Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x141674u, 0x14167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14167Cu;
label_14167c:
    // 0x14167c: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x14167cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
    // 0x141680: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x141680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
    // 0x141684: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x141684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x141688: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x141688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_14168c:
    // 0x14168c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14168cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x141690: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x141690u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141694: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x141694u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x141698: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x141698u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14169c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14169cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1416a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1416a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1416a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1416a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1416a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1416a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1416ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1416ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1416B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416ACu;
        // 0x1416b0: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1416ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1416B4u;
}
