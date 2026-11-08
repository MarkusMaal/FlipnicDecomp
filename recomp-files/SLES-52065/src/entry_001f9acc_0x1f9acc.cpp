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

// Function: entry_001f9acc
// Address: 0x1f9acc - 0x1f9bf8
void entry_001f9acc_0x1f9acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9acc_0x1f9acc");
#endif

    switch (ctx->pc) {
        case 0x1f9bb8u: goto label_1f9bb8;
        default: break;
    }

    ctx->pc = 0x1f9accu;

    // 0x1f9acc: 0x481004a  bgez        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F9ACCu;
    {
        const bool branch_taken_0x1f9acc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1f9acc) {
            ctx->pc = 0x1F9BF8u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x1F9BF8u;
}
