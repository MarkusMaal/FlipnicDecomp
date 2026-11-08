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

// Function: FUN_001f9918
// Address: 0x1f9918 - 0x1f9d48
void FUN_001f9918_0x1f9918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f9918_0x1f9918");
#endif

    switch (ctx->pc) {
        case 0x1f9bb8u: goto label_1f9bb8;
        case 0x1f9c18u: goto label_1f9c18;
        default: break;
    }

    ctx->pc = 0x1f9918u;

    // 0x1f9918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f991c: 0x460062c6  mov.s       $f11, $f12
    ctx->pc = 0x1f991cu;
    ctx->f[11] = FPU_MOV_S(ctx->f[12]);
    // 0x1f9920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9924: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x1f9924u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f9928: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x1f9928u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1f992c: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x1f992cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f9930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9934: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1f9934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1f9938: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f9938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f993c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f993cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9940: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x1f9940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1f9944: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F9944u;
    {
        const bool branch_taken_0x1f9944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9944u;
        // 0x1f9948: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9944) {
            ctx->pc = 0x1F9970u;
            goto label_1f9970;
        }
    }
    ctx->pc = 0x1F994Cu;
    // 0x1f994c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f994cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9950: 0x1c8000f8  bgtz        $a0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x1F9950u;
    {
        const bool branch_taken_0x1f9950 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1F9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9950u;
        // 0x1f9954: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9950) {
            ctx->pc = 0x1F9D34u;
            goto label_1f9d34;
        }
    }
    ctx->pc = 0x1F9958u;
    // 0x1f9958: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f9958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f995c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f995cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f9960: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9964: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x1F9964u;
    {
        const bool branch_taken_0x1f9964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9964u;
        // 0x1f9968: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9964) {
            ctx->pc = 0x1F9D38u;
            goto label_1f9d38;
        }
    }
    ctx->pc = 0x1F996Cu;
    // 0x1f996c: 0x0  nop
    ctx->pc = 0x1f996cu;
    // NOP
label_1f9970:
    // 0x1f9970: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1f9970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f9974: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9974u;
    {
        const bool branch_taken_0x1f9974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9974u;
        // 0x1f9978: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9974) {
            ctx->pc = 0x1F9994u;
            goto label_1f9994;
        }
    }
    ctx->pc = 0x1F997Cu;
    // 0x1f997c: 0x460b5801  sub.s       $f0, $f11, $f11
    ctx->pc = 0x1f997cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[11]);
    // 0x1f9980: 0x0  nop
    ctx->pc = 0x1f9980u;
    // NOP
    // 0x1f9984: 0x0  nop
    ctx->pc = 0x1f9984u;
    // NOP
    // 0x1f9988: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1f9988u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x1f998c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1F998Cu;
    {
        const bool branch_taken_0x1f998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F998Cu;
        // 0x1f9990: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f998c) {
            ctx->pc = 0x1F9D38u;
            goto label_1f9d38;
        }
    }
    ctx->pc = 0x1F9994u;
label_1f9994:
    // 0x1f9994: 0x3c023eff  lui         $v0, 0x3EFF
    ctx->pc = 0x1f9994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
    // 0x1f9998: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f9998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f999c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f999cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f99a0: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F99A0u;
    {
        const bool branch_taken_0x1f99a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99A0u;
        // 0x1f99a4: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99a0) {
            ctx->pc = 0x1F9ACCu;
            goto label_1f9acc;
        }
    }
    ctx->pc = 0x1F99A8u;
    // 0x1f99a8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f99a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f99ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F99ACu;
    {
        const bool branch_taken_0x1f99ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f99ac) {
            ctx->pc = 0x1F99B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F99ACu;
            // 0x1f99b0: 0x460b5d42  mul.s       $f21, $f11, $f11 (Delay Slot)
            ctx->f[21] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F99C8u;
            goto label_1f99c8;
        }
    }
    ctx->pc = 0x1F99B4u;
    // 0x1f99b4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1f99b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1f99b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f99b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f99bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f99bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f99c0: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x1F99C0u;
    {
        const bool branch_taken_0x1f99c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99C0u;
        // 0x1f99c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99c0) {
            ctx->pc = 0x1F9D34u;
            goto label_1f9d34;
        }
    }
    ctx->pc = 0x1F99C8u;
label_1f99c8:
    // 0x1f99c8: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x1f99c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x1f99cc: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x1f99ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x1f99d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f99d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f99d4: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x1f99d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x1f99d8: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x1f99d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x1f99dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f99dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f99e0: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x1f99e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x1f99e4: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x1f99e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x1f99e8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f99e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1f99ec: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f99ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f99f0: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x1f99f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x1f99f4: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x1f99f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x1f99f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f99f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f99fc: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x1f99fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x1f9a00: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x1f9a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x1f9a04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9a08: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1f9a08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1f9a0c: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x1f9a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x1f9a10: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x1f9a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x1f9a14: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1f9a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1f9a18: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1f9a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1f9a1c: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x1f9a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x1f9a20: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x1f9a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x1f9a24: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f9a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f9a28: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x1f9a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x1f9a2c: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x1f9a2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x1f9a30: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1f9a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1f9a34: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f9a34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f9a38: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x1f9a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x1f9a3c: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x1f9a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x1f9a40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f9a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f9a44: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9a44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9a48: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1f9a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x1f9a4c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1f9a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1f9a50: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1f9a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1f9a54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f9a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9a58: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f9a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1f9a5c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1f9a5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1f9a60: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x1f9a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x1f9a64: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1f9a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1f9a68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9a6c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1f9a6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1f9a70: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1f9a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1f9a74: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1f9a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1f9a78: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1f9a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1f9a7c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1f9a7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1f9a80: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9a80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9a84: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1f9a84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1f9a88: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1f9a88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1f9a8c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1f9a8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1f9a90: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9a94: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1f9a94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1f9a98: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x1f9a98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x1f9a9c: 0x46051580  add.s       $f22, $f2, $f5
    ctx->pc = 0x1f9a9cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1f9aa0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9aa4: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x1f9aa4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x1f9aa8: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x1f9aa8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9aac: 0x0  nop
    ctx->pc = 0x1f9aacu;
    // NOP
    // 0x1f9ab0: 0x0  nop
    ctx->pc = 0x1f9ab0u;
    // NOP
    // 0x1f9ab4: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x1f9ab4u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x1f9ab8: 0x460c5842  mul.s       $f1, $f11, $f12
    ctx->pc = 0x1f9ab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x1f9abc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9abcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f9ac0: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x1f9ac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x1f9ac4: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1F9AC4u;
    {
        const bool branch_taken_0x1f9ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AC4u;
        // 0x1f9ac8: 0x46005001  sub.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ac4) {
            ctx->pc = 0x1F9D30u;
            goto label_1f9d30;
        }
    }
    ctx->pc = 0x1F9ACCu;
label_1f9acc:
    // 0x1f9acc: 0x481004a  bgez        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F9ACCu;
    {
        const bool branch_taken_0x1f9acc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1f9acc) {
            ctx->pc = 0x1F9BF8u;
            goto label_1f9bf8;
        }
    }
    ctx->pc = 0x1F9AD4u;
    // 0x1f9ad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f9ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9ad8: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1f9ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1f9adc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f9adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f9ae0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f9ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f9ae4: 0x460a5880  add.s       $f2, $f11, $f10
    ctx->pc = 0x1f9ae4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x1f9ae8: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x1f9ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x1f9aec: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x1f9aecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x1f9af0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9af4: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x1f9af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x1f9af8: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x1f9af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x1f9afc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f9afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f9b00: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x1f9b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x1f9b04: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x1f9b04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x1f9b08: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1f9b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1f9b0c: 0x46031542  mul.s       $f21, $f2, $f3
    ctx->pc = 0x1f9b0cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1f9b10: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x1f9b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x1f9b14: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x1f9b14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x1f9b18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f9b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9b1c: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x1f9b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x1f9b20: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x1f9b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x1f9b24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f9b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f9b28: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x1f9b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x1f9b2c: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x1f9b2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x1f9b30: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1f9b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1f9b34: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9b38: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x1f9b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x1f9b3c: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x1f9b3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x1f9b40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f9b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f9b44: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9b44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9b48: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x1f9b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x1f9b4c: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x1f9b4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x1f9b50: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1f9b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1f9b54: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x1f9b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x1f9b58: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x1f9b58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x1f9b5c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f9b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1f9b60: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f9b60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1f9b64: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1f9b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1f9b68: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1f9b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x1f9b6c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1f9b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1f9b70: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f9b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1f9b74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1f9b74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1f9b78: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9b7c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9b7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9b80: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1f9b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x1f9b84: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1f9b84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1f9b88: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9b8c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9b8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9b90: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1f9b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1f9b94: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1f9b94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1f9b98: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9b9c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9b9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9ba0: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x1f9ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x1f9ba4: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x1f9ba4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x1f9ba8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9bac: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1f9bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1f9bb0: 0xc07e904  jal         func_1FA410
    ctx->pc = 0x1F9BB0u;
    SET_GPR_U32(ctx, 31, 0x1F9BB8u);
    ctx->pc = 0x1F9BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9BB0u;
    // 0x1f9bb4: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA410u, 0x1F9BB0u, 0x1F9BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9BB8u;
label_1f9bb8:
    // 0x1f9bb8: 0x46000286  mov.s       $f10, $f0
    ctx->pc = 0x1f9bb8u;
    ctx->f[10] = FPU_MOV_S(ctx->f[0]);
    // 0x1f9bbc: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x1f9bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x1f9bc0: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1f9bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1f9bc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f9bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9bc8: 0x0  nop
    ctx->pc = 0x1f9bc8u;
    // NOP
    // 0x1f9bcc: 0x0  nop
    ctx->pc = 0x1f9bccu;
    // NOP
    // 0x1f9bd0: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x1f9bd0u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x1f9bd4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f9bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f9bd8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1f9bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1f9bdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f9bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f9be0: 0x460a6002  mul.s       $f0, $f12, $f10
    ctx->pc = 0x1f9be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x1f9be4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9be4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f9be8: 0x46005000  add.s       $f0, $f10, $f0
    ctx->pc = 0x1f9be8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x1f9bec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f9becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1f9bf0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1F9BF0u;
    {
        const bool branch_taken_0x1f9bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BF0u;
        // 0x1f9bf4: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bf0) {
            ctx->pc = 0x1F9D30u;
            goto label_1f9d30;
        }
    }
    ctx->pc = 0x1F9BF8u;
label_1f9bf8:
    // 0x1f9bf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f9bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9bfc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f9bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f9c00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f9c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f9c04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f9c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9c08: 0x460ba001  sub.s       $f0, $f20, $f11
    ctx->pc = 0x1f9c08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[11]);
    // 0x1f9c0c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1f9c0cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9c10: 0xc07e904  jal         func_1FA410
    ctx->pc = 0x1F9C10u;
    SET_GPR_U32(ctx, 31, 0x1F9C18u);
    ctx->pc = 0x1F9C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9C10u;
    // 0x1f9c14: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA410u, 0x1F9C10u, 0x1F9C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C18u;
label_1f9c18:
    // 0x1f9c18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1f9c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f9c1c: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x1f9c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1f9c20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f9c24: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x1f9c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x1f9c28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f9c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f9c2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9c30: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x1f9c30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1f9c34: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x1f9c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x1f9c38: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x1f9c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x1f9c3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9c40: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x1f9c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x1f9c44: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x1f9c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x1f9c48: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f9c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f9c4c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9c50: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x1f9c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x1f9c54: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x1f9c54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x1f9c58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f9c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9c5c: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x1f9c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x1f9c60: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x1f9c60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x1f9c64: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1f9c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1f9c68: 0x4602a881  sub.s       $f2, $f21, $f2
    ctx->pc = 0x1f9c68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x1f9c6c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9c70: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x1f9c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x1f9c74: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x1f9c74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x1f9c78: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f9c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1f9c7c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1f9c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1f9c80: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x1f9c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x1f9c84: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x1f9c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x1f9c88: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1f9c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1f9c8c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1f9c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1f9c90: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1f9c90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1f9c94: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x1f9c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x1f9c98: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x1f9c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x1f9c9c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f9c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f9ca0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9ca4: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1f9ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x1f9ca8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1f9ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1f9cac: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1f9cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1f9cb0: 0x460650c0  add.s       $f3, $f10, $f6
    ctx->pc = 0x1f9cb0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x1f9cb4: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x1f9cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x1f9cb8: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x1f9cb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x1f9cbc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f9cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1f9cc0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9cc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9cc4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x1f9cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x1f9cc8: 0x0  nop
    ctx->pc = 0x1f9cc8u;
    // NOP
    // 0x1f9ccc: 0x0  nop
    ctx->pc = 0x1f9cccu;
    // NOP
    // 0x1f9cd0: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1f9cd0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x1f9cd4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1f9cd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1f9cd8: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x1f9cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x1f9cdc: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x1f9cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x1f9ce0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f9ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f9ce4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9ce8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9ce8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9cec: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1f9cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1f9cf0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1f9cf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1f9cf4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9cf8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9cfc: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1f9cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1f9d00: 0x46140d80  add.s       $f22, $f1, $f20
    ctx->pc = 0x1f9d00u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1f9d04: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9d08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9d0c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1f9d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x1f9d10: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x1f9d10u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9d14: 0x0  nop
    ctx->pc = 0x1f9d14u;
    // NOP
    // 0x1f9d18: 0x0  nop
    ctx->pc = 0x1f9d18u;
    // NOP
    // 0x1f9d1c: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x1f9d1cu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x1f9d20: 0x460a6002  mul.s       $f0, $f12, $f10
    ctx->pc = 0x1f9d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x1f9d24: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f9d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1f9d28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f9d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f9d2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f9d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1f9d30:
    // 0x1f9d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9d34:
    // 0x1f9d34: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x1f9d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1f9d38:
    // 0x1f9d38: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x1f9d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f9d3c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1f9d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f9d40: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D40u;
        // 0x1f9d44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9D48u;
}
