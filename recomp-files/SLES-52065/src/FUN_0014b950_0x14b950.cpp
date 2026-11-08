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

// Function: FUN_0014b950
// Address: 0x14b950 - 0x14bb60
void FUN_0014b950_0x14b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014b950_0x14b950");
#endif

    switch (ctx->pc) {
        case 0x14b9d0u: goto label_14b9d0;
        case 0x14ba08u: goto label_14ba08;
        case 0x14ba10u: goto label_14ba10;
        case 0x14ba44u: goto label_14ba44;
        case 0x14ba4cu: goto label_14ba4c;
        case 0x14ba5cu: goto label_14ba5c;
        case 0x14ba6cu: goto label_14ba6c;
        case 0x14ba98u: goto label_14ba98;
        case 0x14bab8u: goto label_14bab8;
        case 0x14bac0u: goto label_14bac0;
        case 0x14baecu: goto label_14baec;
        case 0x14baf4u: goto label_14baf4;
        case 0x14bb04u: goto label_14bb04;
        case 0x14bb14u: goto label_14bb14;
        case 0x14bb38u: goto label_14bb38;
        default: break;
    }

    ctx->pc = 0x14b950u;

    // 0x14b950: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x14b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x14b954: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14b958: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x14b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14b95c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14b95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14b960: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x14b960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14b964: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14b964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14b968: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14b968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b96c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b970: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14b970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14b974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b978: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x14b978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14b97c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x14b97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b980: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x14b980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b984: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x14b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b988: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x14b988u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14b98c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x14b98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14b990: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x14b990u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14b994: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x14b994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14b998: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x14b998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x14b99c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x14b99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14b9a0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x14b9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b9a4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x14b9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b9a8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x14b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b9ac: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x14b9acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14b9b0: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x14b9b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x14b9b4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x14b9b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x14b9b8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x14b9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x14b9bc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14b9bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b9c0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x14b9c4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x14b9c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b9c8: 0xc050238  jal         func_1408E0
    ctx->pc = 0x14B9C8u;
    SET_GPR_U32(ctx, 31, 0x14B9D0u);
    ctx->pc = 0x14B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9C8u;
    // 0x14b9cc: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408E0u, 0x14B9C8u, 0x14B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9D0u;
label_14b9d0:
    // 0x14b9d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9d4: 0x27a300ec  addiu       $v1, $sp, 0xEC
    ctx->pc = 0x14b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x14b9d8: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x14b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x14b9dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14b9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14b9e0: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x14b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x14b9e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b9e8: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x14b9e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14b9ec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B9ECu;
    {
        const bool branch_taken_0x14b9ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9ECu;
        // 0x14b9f0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9ec) {
            ctx->pc = 0x14BA10u;
            goto label_14ba10;
        }
    }
    ctx->pc = 0x14B9F4u;
    // 0x14b9f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14b9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14b9f8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14b9fc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14ba00: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14BA00u;
    SET_GPR_U32(ctx, 31, 0x14BA08u);
    ctx->pc = 0x14BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA00u;
    // 0x14ba04: 0x24a5f250  addiu       $a1, $a1, -0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14BA00u, 0x14BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA08u;
label_14ba08:
    // 0x14ba08: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14BA08u;
    SET_GPR_U32(ctx, 31, 0x14BA10u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14BA08u, 0x14BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA10u;
label_14ba10:
    // 0x14ba10: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14ba14: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x14ba14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14ba18: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x14BA18u;
    {
        const bool branch_taken_0x14ba18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA18u;
        // 0x14ba1c: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba18) {
            ctx->pc = 0x14BA8Cu;
            goto label_14ba8c;
        }
    }
    ctx->pc = 0x14BA20u;
    // 0x14ba20: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x14ba20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14ba24: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x14ba24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ba28: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x14ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14ba2c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x14ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14ba30: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x14ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14ba34: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x14ba34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x14ba38: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14ba38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ba3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14BA3Cu;
    {
        const bool branch_taken_0x14ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA3Cu;
        // 0x14ba40: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba3c) {
            ctx->pc = 0x14BA60u;
            goto label_14ba60;
        }
    }
    ctx->pc = 0x14BA44u;
label_14ba44:
    // 0x14ba44: 0xc050234  jal         func_1408D0
    ctx->pc = 0x14BA44u;
    SET_GPR_U32(ctx, 31, 0x14BA4Cu);
    ctx->pc = 0x14BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA44u;
    // 0x14ba48: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x14BA44u, 0x14BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA4Cu;
label_14ba4c:
    // 0x14ba4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ba50: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14ba54: 0xc050224  jal         func_140890
    ctx->pc = 0x14BA54u;
    SET_GPR_U32(ctx, 31, 0x14BA5Cu);
    ctx->pc = 0x14BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA54u;
    // 0x14ba58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14BA54u, 0x14BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA5Cu;
label_14ba5c:
    // 0x14ba5c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x14ba5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_14ba60:
    // 0x14ba60: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14ba64: 0xc05021c  jal         func_140870
    ctx->pc = 0x14BA64u;
    SET_GPR_U32(ctx, 31, 0x14BA6Cu);
    ctx->pc = 0x14BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA64u;
    // 0x14ba68: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140870u, 0x14BA64u, 0x14BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA6Cu;
label_14ba6c:
    // 0x14ba6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14ba6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ba70: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x14ba70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14ba74: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14ba74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14ba78: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x14BA78u;
    {
        const bool branch_taken_0x14ba78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ba78) {
            ctx->pc = 0x14BA44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ba44;
        }
    }
    ctx->pc = 0x14BA80u;
    // 0x14ba80: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x14ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x14ba84: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x14BA84u;
    {
        const bool branch_taken_0x14ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA84u;
        // 0x14ba88: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba84) {
            ctx->pc = 0x14BB44u;
            goto label_14bb44;
        }
    }
    ctx->pc = 0x14BA8Cu;
label_14ba8c:
    // 0x14ba8c: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x14ba8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14ba90: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14BA90u;
    SET_GPR_U32(ctx, 31, 0x14BA98u);
    ctx->pc = 0x14BA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA90u;
    // 0x14ba94: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14BA90u, 0x14BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA98u;
label_14ba98:
    // 0x14ba98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14ba98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba9c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x14BA9Cu;
    {
        const bool branch_taken_0x14ba9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA9Cu;
        // 0x14baa0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba9c) {
            ctx->pc = 0x14BAC0u;
            goto label_14bac0;
        }
    }
    ctx->pc = 0x14BAA4u;
    // 0x14baa4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14baa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14baa8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14baac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14baacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14bab0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14BAB0u;
    SET_GPR_U32(ctx, 31, 0x14BAB8u);
    ctx->pc = 0x14BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAB0u;
    // 0x14bab4: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14BAB0u, 0x14BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAB8u;
label_14bab8:
    // 0x14bab8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14BAB8u;
    SET_GPR_U32(ctx, 31, 0x14BAC0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14BAB8u, 0x14BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAC0u;
label_14bac0:
    // 0x14bac0: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x14bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
    // 0x14bac4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x14bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14bac8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x14bac8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14bacc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x14baccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14bad0: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x14bad0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14bad4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x14bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14bad8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x14bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14badc: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x14badcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x14bae0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14bae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14bae4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14BAE4u;
    {
        const bool branch_taken_0x14bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BAE4u;
        // 0x14bae8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bae4) {
            ctx->pc = 0x14BB08u;
            goto label_14bb08;
        }
    }
    ctx->pc = 0x14BAECu;
label_14baec:
    // 0x14baec: 0xc050234  jal         func_1408D0
    ctx->pc = 0x14BAECu;
    SET_GPR_U32(ctx, 31, 0x14BAF4u);
    ctx->pc = 0x14BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAECu;
    // 0x14baf0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x14BAECu, 0x14BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAF4u;
label_14baf4:
    // 0x14baf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14baf8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14bafc: 0xc050224  jal         func_140890
    ctx->pc = 0x14BAFCu;
    SET_GPR_U32(ctx, 31, 0x14BB04u);
    ctx->pc = 0x14BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAFCu;
    // 0x14bb00: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14BAFCu, 0x14BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB04u;
label_14bb04:
    // 0x14bb04: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x14bb04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_14bb08:
    // 0x14bb08: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14bb0c: 0xc05021c  jal         func_140870
    ctx->pc = 0x14BB0Cu;
    SET_GPR_U32(ctx, 31, 0x14BB14u);
    ctx->pc = 0x14BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB0Cu;
    // 0x14bb10: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140870u, 0x14BB0Cu, 0x14BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB14u;
label_14bb14:
    // 0x14bb14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14bb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14bb18: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x14bb18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14bb1c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14bb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14bb20: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x14BB20u;
    {
        const bool branch_taken_0x14bb20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bb20) {
            ctx->pc = 0x14BAECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14baec;
        }
    }
    ctx->pc = 0x14BB28u;
    // 0x14bb28: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BB28u;
    {
        const bool branch_taken_0x14bb28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB28u;
        // 0x14bb2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb28) {
            ctx->pc = 0x14BB38u;
            goto label_14bb38;
        }
    }
    ctx->pc = 0x14BB30u;
    // 0x14bb30: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14BB30u;
    SET_GPR_U32(ctx, 31, 0x14BB38u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14BB30u, 0x14BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB38u;
label_14bb38:
    // 0x14bb38: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x14bb38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x14bb3c: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x14bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x14bb40: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x14bb40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_14bb44:
    // 0x14bb44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14bb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14bb48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14bb48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14bb4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14bb4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14bb50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14bb50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bb54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14bb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bb58: 0x3e00008  jr          $ra
    ctx->pc = 0x14BB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB58u;
        // 0x14bb5c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BB60u;
}
