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

// Function: FUN_00126ae0
// Address: 0x126ae0 - 0x126c2c
void FUN_00126ae0_0x126ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00126ae0_0x126ae0");
#endif

    switch (ctx->pc) {
        case 0x126b10u: goto label_126b10;
        case 0x126b68u: goto label_126b68;
        case 0x126c18u: goto label_126c18;
        default: break;
    }

    ctx->pc = 0x126ae0u;

    // 0x126ae0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x126ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x126ae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x126ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x126ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x126aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x126aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x126af0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126af4: 0x8c820140  lw          $v0, 0x140($a0)
    ctx->pc = 0x126af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x126af8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x126AF8u;
    {
        const bool branch_taken_0x126af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AF8u;
        // 0x126afc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126af8) {
            ctx->pc = 0x126B68u;
            goto label_126b68;
        }
    }
    ctx->pc = 0x126B00u;
    // 0x126b00: 0xc62c00fc  lwc1        $f12, 0xFC($s1)
    ctx->pc = 0x126b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x126b04: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x126b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x126b08: 0xc049b5c  jal         func_126D70
    ctx->pc = 0x126B08u;
    SET_GPR_U32(ctx, 31, 0x126B10u);
    ctx->pc = 0x126B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B08u;
    // 0x126b0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126D70u, 0x126B08u, 0x126B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B10u;
label_126b10:
    // 0x126b10: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x126b10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126b14: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x126b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x126b18: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x126b18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x126b1c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x126b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x126b20: 0x27a80054  addiu       $t0, $sp, 0x54
    ctx->pc = 0x126b20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x126b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b28: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x126b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x126b2c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x126b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x126b30: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x126b30u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x126b34: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x126b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126b38: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x126b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x126b3c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x126b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126b40: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x126b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x126b44: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x126b44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126b48: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x126b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x126b4c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x126b4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x126b50: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x126b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x126b54: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x126b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126b58: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x126b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x126b5c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x126b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126b60: 0xc049948  jal         func_126520
    ctx->pc = 0x126B60u;
    SET_GPR_U32(ctx, 31, 0x126B68u);
    ctx->pc = 0x126B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B60u;
    // 0x126b64: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x126B60u, 0x126B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B68u;
label_126b68:
    // 0x126b68: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x126b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x126b6c: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x126b6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x126b70: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x126B70u;
    {
        const bool branch_taken_0x126b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B70u;
        // 0x126b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b70) {
            ctx->pc = 0x126C10u;
            goto label_126c10;
        }
    }
    ctx->pc = 0x126B78u;
    // 0x126b78: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x126b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x126b7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x126b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x126b80: 0x2463eb20  addiu       $v1, $v1, -0x14E0
    ctx->pc = 0x126b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961952));
    // 0x126b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126b88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x126b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126b8c: 0x400008  jr          $v0
    ctx->pc = 0x126B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126B94u: goto label_126b94;
            case 0x126BB0u: goto label_126bb0;
            case 0x126BC4u: goto label_126bc4;
            case 0x126BD8u: goto label_126bd8;
            case 0x126BE4u: goto label_126be4;
            case 0x126BF8u: goto label_126bf8;
            case 0x126C04u: goto label_126c04;
            case 0x126C0Cu: goto label_126c0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126B8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x126B94u;
label_126b94:
    // 0x126b94: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x126b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126b98: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x126b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x126b9c: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x126b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126ba0: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x126ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x126ba4: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x126ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126ba8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x126BA8u;
    {
        const bool branch_taken_0x126ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BA8u;
        // 0x126bac: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ba8) {
            ctx->pc = 0x126C0Cu;
            goto label_126c0c;
        }
    }
    ctx->pc = 0x126BB0u;
label_126bb0:
    // 0x126bb0: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x126bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126bb4: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x126bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x126bb8: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x126bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126bbc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x126BBCu;
    {
        const bool branch_taken_0x126bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BBCu;
        // 0x126bc0: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bbc) {
            ctx->pc = 0x126C0Cu;
            goto label_126c0c;
        }
    }
    ctx->pc = 0x126BC4u;
label_126bc4:
    // 0x126bc4: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x126bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126bc8: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x126bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x126bcc: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x126bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126bd0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x126BD0u;
    {
        const bool branch_taken_0x126bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BD0u;
        // 0x126bd4: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bd0) {
            ctx->pc = 0x126C0Cu;
            goto label_126c0c;
        }
    }
    ctx->pc = 0x126BD8u;
label_126bd8:
    // 0x126bd8: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x126bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126bdc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x126BDCu;
    {
        const bool branch_taken_0x126bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BDCu;
        // 0x126be0: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bdc) {
            ctx->pc = 0x126C0Cu;
            goto label_126c0c;
        }
    }
    ctx->pc = 0x126BE4u;
label_126be4:
    // 0x126be4: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x126be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126be8: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x126be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x126bec: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x126becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126bf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x126BF0u;
    {
        const bool branch_taken_0x126bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BF0u;
        // 0x126bf4: 0xe6200084  swc1        $f0, 0x84($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bf0) {
            ctx->pc = 0x126C0Cu;
            goto label_126c0c;
        }
    }
    ctx->pc = 0x126BF8u;
label_126bf8:
    // 0x126bf8: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x126bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126bfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x126BFCu;
    {
        const bool branch_taken_0x126bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BFCu;
        // 0x126c00: 0xe6200084  swc1        $f0, 0x84($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bfc) {
            ctx->pc = 0x126C0Cu;
            goto label_126c0c;
        }
    }
    ctx->pc = 0x126C04u;
label_126c04:
    // 0x126c04: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x126c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126c08: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x126c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_126c0c:
    // 0x126c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_126c10:
    // 0x126c10: 0xc0497f0  jal         func_125FC0
    ctx->pc = 0x126C10u;
    SET_GPR_U32(ctx, 31, 0x126C18u);
    ctx->pc = 0x126C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C10u;
    // 0x126c14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125FC0u, 0x126C10u, 0x126C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C18u;
label_126c18:
    // 0x126c18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x126c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126c1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x126c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126c24: 0x3e00008  jr          $ra
    ctx->pc = 0x126C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C24u;
        // 0x126c28: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126C2Cu;
}
