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

// Function: FUN_001fa030
// Address: 0x1fa030 - 0x1fa410
void FUN_001fa030_0x1fa030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fa030_0x1fa030");
#endif

    switch (ctx->pc) {
        case 0x1fa194u: goto label_1fa194;
        case 0x1fa348u: goto label_1fa348;
        case 0x1fa390u: goto label_1fa390;
        case 0x1fa3ccu: goto label_1fa3cc;
        default: break;
    }

    ctx->pc = 0x1fa030u;

    // 0x1fa030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fa030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fa034: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1fa034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1fa038: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fa038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fa03c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1fa03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1fa040: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fa040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fa044: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1fa044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fa048: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fa048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa04c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1fa04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1fa050: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fa050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fa054: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x1fa054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x1fa058: 0x2438024  and         $s0, $s2, $v1
    ctx->pc = 0x1fa058u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x1fa05c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1fa05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1fa060: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fa060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fa064: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA064u;
    {
        const bool branch_taken_0x1fa064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA064u;
        // 0x1fa068: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa064) {
            ctx->pc = 0x1FA080u;
            goto label_1fa080;
        }
    }
    ctx->pc = 0x1FA06Cu;
    // 0x1fa06c: 0xe62c0000  swc1        $f12, 0x0($s1)
    ctx->pc = 0x1fa06cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1fa070: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fa070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa074: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x1FA074u;
    {
        const bool branch_taken_0x1fa074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA074u;
        // 0x1fa078: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa074) {
            ctx->pc = 0x1FA3F8u;
            goto label_1fa3f8;
        }
    }
    ctx->pc = 0x1FA07Cu;
    // 0x1fa07c: 0x0  nop
    ctx->pc = 0x1fa07cu;
    // NOP
label_1fa080:
    // 0x1fa080: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1fa080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x1fa084: 0x3442cbe3  ori         $v0, $v0, 0xCBE3
    ctx->pc = 0x1fa084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52195);
    // 0x1fa088: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fa088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fa08c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1FA08Cu;
    {
        const bool branch_taken_0x1fa08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA08Cu;
        // 0x1fa090: 0x3c024349  lui         $v0, 0x4349 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa08c) {
            ctx->pc = 0x1FA17Cu;
            goto label_1fa17c;
        }
    }
    ctx->pc = 0x1FA094u;
    // 0x1fa094: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FA094u;
    {
        const bool branch_taken_0x1fa094 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1FA098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA094u;
        // 0x1fa098: 0x3c033fc9  lui         $v1, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa094) {
            ctx->pc = 0x1FA10Cu;
            goto label_1fa10c;
        }
    }
    ctx->pc = 0x1FA09Cu;
    // 0x1fa09c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1fa09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1fa0a0: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x1fa0a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x1fa0a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa0a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fa0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fa0ac: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1fa0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x1fa0b0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1fa0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1fa0b4: 0x34630fd0  ori         $v1, $v1, 0xFD0
    ctx->pc = 0x1fa0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4048);
    // 0x1fa0b8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA0B8u;
    {
        const bool branch_taken_0x1fa0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0B8u;
        // 0x1fa0bc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0b8) {
            ctx->pc = 0x1FA0D4u;
            goto label_1fa0d4;
        }
    }
    ctx->pc = 0x1FA0C0u;
    // 0x1fa0c0: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1fa0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1fa0c4: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x1fa0c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x1fa0c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fa0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa0cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA0CCu;
    {
        const bool branch_taken_0x1fa0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0CCu;
        // 0x1fa0d0: 0x46026041  sub.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0cc) {
            ctx->pc = 0x1FA0F4u;
            goto label_1fa0f4;
        }
    }
    ctx->pc = 0x1FA0D4u;
label_1fa0d4:
    // 0x1fa0d4: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1fa0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1fa0d8: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x1fa0d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x1fa0dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa0dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa0e0: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1fa0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x1fa0e4: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x1fa0e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x1fa0e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fa0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa0ec: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1fa0ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1fa0f0: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x1fa0f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_1fa0f4:
    // 0x1fa0f4: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x1fa0f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1fa0f8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1fa0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1fa0fc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1fa0fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1fa100: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fa100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1fa104: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x1FA104u;
    {
        const bool branch_taken_0x1fa104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA104u;
        // 0x1fa108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa104) {
            ctx->pc = 0x1FA3F8u;
            goto label_1fa3f8;
        }
    }
    ctx->pc = 0x1FA10Cu;
label_1fa10c:
    // 0x1fa10c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1fa10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1fa110: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x1fa110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x1fa114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa118: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fa118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fa11c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1fa11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x1fa120: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1fa120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1fa124: 0x34630fd0  ori         $v1, $v1, 0xFD0
    ctx->pc = 0x1fa124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4048);
    // 0x1fa128: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA128u;
    {
        const bool branch_taken_0x1fa128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA128u;
        // 0x1fa12c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa128) {
            ctx->pc = 0x1FA144u;
            goto label_1fa144;
        }
    }
    ctx->pc = 0x1FA130u;
    // 0x1fa130: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1fa130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1fa134: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x1fa134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x1fa138: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fa138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa13c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA13Cu;
    {
        const bool branch_taken_0x1fa13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA13Cu;
        // 0x1fa140: 0x46026040  add.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa13c) {
            ctx->pc = 0x1FA164u;
            goto label_1fa164;
        }
    }
    ctx->pc = 0x1FA144u;
label_1fa144:
    // 0x1fa144: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1fa144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1fa148: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x1fa148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x1fa14c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa150: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1fa150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x1fa154: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x1fa154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x1fa158: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fa158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa15c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1fa15cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1fa160: 0x46026040  add.s       $f1, $f12, $f2
    ctx->pc = 0x1fa160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_1fa164:
    // 0x1fa164: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x1fa164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1fa168: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1fa168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1fa16c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fa16cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fa170: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fa170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1fa174: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1FA174u;
    {
        const bool branch_taken_0x1fa174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA174u;
        // 0x1fa178: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa174) {
            ctx->pc = 0x1FA3F8u;
            goto label_1fa3f8;
        }
    }
    ctx->pc = 0x1FA17Cu;
label_1fa17c:
    // 0x1fa17c: 0x34420f80  ori         $v0, $v0, 0xF80
    ctx->pc = 0x1fa17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3968);
    // 0x1fa180: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fa180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fa184: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1FA184u;
    {
        const bool branch_taken_0x1fa184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA184u;
        // 0x1fa188: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa184) {
            ctx->pc = 0x1FA300u;
            goto label_1fa300;
        }
    }
    ctx->pc = 0x1FA18Cu;
    // 0x1fa18c: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x1FA18Cu;
    SET_GPR_U32(ctx, 31, 0x1FA194u);
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x1FA18Cu, 0x1FA194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA194u;
label_1fa194:
    // 0x1fa194: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x1fa194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x1fa198: 0x3421f984  ori         $at, $at, 0xF984
    ctx->pc = 0x1fa198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63876);
    // 0x1fa19c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa1a0: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x1fa1a0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x1fa1a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fa1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fa1a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fa1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa1ac: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x1fa1acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1fa1b0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1fa1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1fa1b4: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x1fa1b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x1fa1b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa1bc: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1fa1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1fa1c0: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x1fa1c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x1fa1c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fa1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fa1c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1fa1c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1fa1cc: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa1ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1fa1d0: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1fa1d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1fa1d4: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x1fa1d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1fa1d8: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1fa1d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1fa1dc: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1fa1dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fa1e0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1fa1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fa1e4: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x1fa1e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x1fa1e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FA1E8u;
    {
        const bool branch_taken_0x1fa1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1E8u;
        // 0x1fa1ec: 0x46002901  sub.s       $f4, $f5, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1e8) {
            ctx->pc = 0x1FA224u;
            goto label_1fa224;
        }
    }
    ctx->pc = 0x1FA1F0u;
    // 0x1fa1f0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1fa1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1fa1f4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1fa1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1fa1f8: 0x24844c18  addiu       $a0, $a0, 0x4C18
    ctx->pc = 0x1fa1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19480));
    // 0x1fa1fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fa1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa200: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fa200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fa204: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fa204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fa208: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1fa208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x1fa20c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fa20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa210: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1fa210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1fa214: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA214u;
    {
        const bool branch_taken_0x1fa214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA214u;
        // 0x1fa218: 0x46032001  sub.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa214) {
            ctx->pc = 0x1FA228u;
            goto label_1fa228;
        }
    }
    ctx->pc = 0x1FA21Cu;
    // 0x1fa21c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1FA21Cu;
    {
        const bool branch_taken_0x1fa21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA21Cu;
        // 0x1fa220: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa21c) {
            ctx->pc = 0x1FA2E0u;
            goto label_1fa2e0;
        }
    }
    ctx->pc = 0x1FA224u;
label_1fa224:
    // 0x1fa224: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x1fa224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1fa228:
    // 0x1fa228: 0x1025c3  sra         $a0, $s0, 23
    ctx->pc = 0x1fa228u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 23));
    // 0x1fa22c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fa22cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fa230: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fa230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fa234: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x1fa234u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x1fa238: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fa238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa23c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1fa23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fa240: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x1fa240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1fa244: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FA244u;
    {
        const bool branch_taken_0x1fa244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa244) {
            ctx->pc = 0x1FA248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA244u;
            // 0x1fa248: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA2E4u;
            goto label_1fa2e4;
        }
    }
    ctx->pc = 0x1FA24Cu;
    // 0x1fa24c: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1fa24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1fa250: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x1fa250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x1fa254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa258: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x1fa258u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x1fa25c: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1fa25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x1fa260: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x1fa260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x1fa264: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa268: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x1fa268u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fa26c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1fa26cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1fa270: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1fa270u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1fa274: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x1fa274u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1fa278: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1fa278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1fa27c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1fa27cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fa280: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x1fa280u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1fa284: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1fa284u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fa288: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fa288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fa28c: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x1fa28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x1fa290: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fa290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa294: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1fa294u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fa298: 0x2862001a  slti        $v0, $v1, 0x1A
    ctx->pc = 0x1fa298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1fa29c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FA29Cu;
    {
        const bool branch_taken_0x1fa29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa29c) {
            ctx->pc = 0x1FA2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA29Cu;
            // 0x1fa2a0: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA2E4u;
            goto label_1fa2e4;
        }
    }
    ctx->pc = 0x1FA2A4u;
    // 0x1fa2a4: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1fa2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x1fa2a8: 0x3421a300  ori         $at, $at, 0xA300
    ctx->pc = 0x1fa2a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41728);
    // 0x1fa2ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa2b0: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x1fa2b0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x1fa2b4: 0x3c01248d  lui         $at, 0x248D
    ctx->pc = 0x1fa2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9357 << 16));
    // 0x1fa2b8: 0x34213132  ori         $at, $at, 0x3132
    ctx->pc = 0x1fa2b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12594);
    // 0x1fa2bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fa2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa2c0: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x1fa2c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fa2c4: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x1fa2c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x1fa2c8: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1fa2c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1fa2cc: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x1fa2ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1fa2d0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1fa2d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1fa2d4: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x1fa2d4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1fa2d8: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x1fa2d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1fa2dc: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1fa2dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1fa2e0:
    // 0x1fa2e0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1fa2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa2e4:
    // 0x1fa2e4: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x1fa2e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1fa2e8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1fa2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1fa2ec: 0x6410041  bgez        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x1FA2ECu;
    {
        const bool branch_taken_0x1fa2ec = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1FA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2ECu;
        // 0x1fa2f0: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2ec) {
            ctx->pc = 0x1FA3F4u;
            goto label_1fa3f4;
        }
    }
    ctx->pc = 0x1FA2F4u;
    // 0x1fa2f4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1fa2f4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1fa2f8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1FA2F8u;
    {
        const bool branch_taken_0x1fa2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2F8u;
        // 0x1fa2fc: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2f8) {
            ctx->pc = 0x1FA3E4u;
            goto label_1fa3e4;
        }
    }
    ctx->pc = 0x1FA300u;
label_1fa300:
    // 0x1fa300: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fa300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fa304: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fa304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fa308: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA308u;
    {
        const bool branch_taken_0x1fa308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA308u;
        // 0x1fa30c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa308) {
            ctx->pc = 0x1FA320u;
            goto label_1fa320;
        }
    }
    ctx->pc = 0x1FA310u;
    // 0x1fa310: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x1fa310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x1fa314: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1fa314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1fa318: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1FA318u;
    {
        const bool branch_taken_0x1fa318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA318u;
        // 0x1fa31c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa318) {
            ctx->pc = 0x1FA3F8u;
            goto label_1fa3f8;
        }
    }
    ctx->pc = 0x1FA320u;
label_1fa320:
    // 0x1fa320: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x1fa320u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x1fa324: 0x2466ff7a  addiu       $a2, $v1, -0x86
    ctx->pc = 0x1fa324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967162));
    // 0x1fa328: 0x615c0  sll         $v0, $a2, 23
    ctx->pc = 0x1fa328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x1fa32c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1fa32cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fa330: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1fa330u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fa334: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1fa334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1fa338: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fa338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa33c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa340: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fa340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa344: 0x0  nop
    ctx->pc = 0x1fa344u;
    // NOP
label_1fa348:
    // 0x1fa348: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa348u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fa34c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fa34cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fa350: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fa350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fa354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa358: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fa35c: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x1fa35cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1fa360: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1fa360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1fa364: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1fa364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1fa368: 0x461fff7  bgez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FA368u;
    {
        const bool branch_taken_0x1fa368 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA368u;
        // 0x1fa36c: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa368) {
            ctx->pc = 0x1FA348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa348;
        }
    }
    ctx->pc = 0x1FA370u;
    // 0x1fa370: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1fa370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa374: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1fa374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fa378: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x1fa378u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa37c: 0x0  nop
    ctx->pc = 0x1fa37cu;
    // NOP
    // 0x1fa380: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1FA380u;
    {
        const bool branch_taken_0x1fa380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA380u;
        // 0x1fa384: 0xe7ac0008  swc1        $f12, 0x8($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa380) {
            ctx->pc = 0x1FA3B4u;
            goto label_1fa3b4;
        }
    }
    ctx->pc = 0x1FA388u;
    // 0x1fa388: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fa388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa38c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1fa38cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa390:
    // 0x1fa390: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x1fa390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1fa394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa398: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1fa398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fa39c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1fa39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1fa3a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fa3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa3a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1fa3a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa3a8: 0x0  nop
    ctx->pc = 0x1fa3a8u;
    // NOP
    // 0x1fa3ac: 0x4503fff8  bc1tl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FA3ACu;
    {
        const bool branch_taken_0x1fa3ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa3ac) {
            ctx->pc = 0x1FA3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA3ACu;
            // 0x1fa3b0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa390;
        }
    }
    ctx->pc = 0x1FA3B4u;
label_1fa3b4:
    // 0x1fa3b4: 0x3c090022  lui         $t1, 0x22
    ctx->pc = 0x1fa3b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34 << 16));
    // 0x1fa3b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fa3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3bc: 0x25294900  addiu       $t1, $t1, 0x4900
    ctx->pc = 0x1fa3bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18688));
    // 0x1fa3c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fa3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3c4: 0xc07e9a8  jal         func_1FA6A0
    ctx->pc = 0x1FA3C4u;
    SET_GPR_U32(ctx, 31, 0x1FA3CCu);
    ctx->pc = 0x1FA3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA3C4u;
    // 0x1fa3c8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6A0u, 0x1FA3C4u, 0x1FA3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA3CCu;
label_1fa3cc:
    // 0x1fa3cc: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA3CCu;
    {
        const bool branch_taken_0x1fa3cc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1FA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3CCu;
        // 0x1fa3d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3cc) {
            ctx->pc = 0x1FA3F4u;
            goto label_1fa3f4;
        }
    }
    ctx->pc = 0x1FA3D4u;
    // 0x1fa3d4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1fa3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa3d8: 0x51023  negu        $v0, $a1
    ctx->pc = 0x1fa3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1fa3dc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1fa3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa3e0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1fa3e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1fa3e4:
    // 0x1fa3e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fa3e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1fa3e8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1fa3e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1fa3ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA3ECu;
    {
        const bool branch_taken_0x1fa3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3ECu;
        // 0x1fa3f0: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3ec) {
            ctx->pc = 0x1FA3F8u;
            goto label_1fa3f8;
        }
    }
    ctx->pc = 0x1FA3F4u;
label_1fa3f4:
    // 0x1fa3f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fa3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fa3f8:
    // 0x1fa3f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fa3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fa3fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1fa3fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa400: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1fa400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa404: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fa404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa408: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA408u;
        // 0x1fa40c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA410u;
}
