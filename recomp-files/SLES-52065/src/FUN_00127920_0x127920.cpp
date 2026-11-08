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

// Function: FUN_00127920
// Address: 0x127920 - 0x127a90
void FUN_00127920_0x127920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127920_0x127920");
#endif

    switch (ctx->pc) {
        case 0x127920u: goto label_127920;
        case 0x127924u: goto label_127924;
        case 0x127928u: goto label_127928;
        case 0x12792cu: goto label_12792c;
        case 0x127930u: goto label_127930;
        case 0x127934u: goto label_127934;
        case 0x127938u: goto label_127938;
        case 0x12793cu: goto label_12793c;
        case 0x127940u: goto label_127940;
        case 0x127944u: goto label_127944;
        case 0x127948u: goto label_127948;
        case 0x12794cu: goto label_12794c;
        case 0x127950u: goto label_127950;
        case 0x127954u: goto label_127954;
        case 0x127958u: goto label_127958;
        case 0x12795cu: goto label_12795c;
        case 0x127960u: goto label_127960;
        case 0x127964u: goto label_127964;
        case 0x127968u: goto label_127968;
        case 0x12796cu: goto label_12796c;
        case 0x127970u: goto label_127970;
        case 0x127974u: goto label_127974;
        case 0x127978u: goto label_127978;
        case 0x12797cu: goto label_12797c;
        case 0x127980u: goto label_127980;
        case 0x127984u: goto label_127984;
        case 0x127988u: goto label_127988;
        case 0x12798cu: goto label_12798c;
        case 0x127990u: goto label_127990;
        case 0x127994u: goto label_127994;
        case 0x127998u: goto label_127998;
        case 0x12799cu: goto label_12799c;
        case 0x1279a0u: goto label_1279a0;
        case 0x1279a4u: goto label_1279a4;
        case 0x1279a8u: goto label_1279a8;
        case 0x1279acu: goto label_1279ac;
        case 0x1279b0u: goto label_1279b0;
        case 0x1279b4u: goto label_1279b4;
        case 0x1279b8u: goto label_1279b8;
        case 0x1279bcu: goto label_1279bc;
        case 0x1279c0u: goto label_1279c0;
        case 0x1279c4u: goto label_1279c4;
        case 0x1279c8u: goto label_1279c8;
        case 0x1279ccu: goto label_1279cc;
        case 0x1279d0u: goto label_1279d0;
        case 0x1279d4u: goto label_1279d4;
        case 0x1279d8u: goto label_1279d8;
        case 0x1279dcu: goto label_1279dc;
        case 0x1279e0u: goto label_1279e0;
        case 0x1279e4u: goto label_1279e4;
        case 0x1279e8u: goto label_1279e8;
        case 0x1279ecu: goto label_1279ec;
        case 0x1279f0u: goto label_1279f0;
        case 0x1279f4u: goto label_1279f4;
        case 0x1279f8u: goto label_1279f8;
        case 0x1279fcu: goto label_1279fc;
        case 0x127a00u: goto label_127a00;
        case 0x127a04u: goto label_127a04;
        case 0x127a08u: goto label_127a08;
        case 0x127a0cu: goto label_127a0c;
        case 0x127a10u: goto label_127a10;
        case 0x127a14u: goto label_127a14;
        case 0x127a18u: goto label_127a18;
        case 0x127a1cu: goto label_127a1c;
        case 0x127a20u: goto label_127a20;
        case 0x127a24u: goto label_127a24;
        case 0x127a28u: goto label_127a28;
        case 0x127a2cu: goto label_127a2c;
        case 0x127a30u: goto label_127a30;
        case 0x127a34u: goto label_127a34;
        case 0x127a38u: goto label_127a38;
        case 0x127a3cu: goto label_127a3c;
        case 0x127a40u: goto label_127a40;
        case 0x127a44u: goto label_127a44;
        case 0x127a48u: goto label_127a48;
        case 0x127a4cu: goto label_127a4c;
        case 0x127a50u: goto label_127a50;
        case 0x127a54u: goto label_127a54;
        case 0x127a58u: goto label_127a58;
        case 0x127a5cu: goto label_127a5c;
        case 0x127a60u: goto label_127a60;
        case 0x127a64u: goto label_127a64;
        case 0x127a68u: goto label_127a68;
        case 0x127a6cu: goto label_127a6c;
        case 0x127a70u: goto label_127a70;
        case 0x127a74u: goto label_127a74;
        case 0x127a78u: goto label_127a78;
        case 0x127a7cu: goto label_127a7c;
        case 0x127a80u: goto label_127a80;
        case 0x127a84u: goto label_127a84;
        case 0x127a88u: goto label_127a88;
        case 0x127a8cu: goto label_127a8c;
        default: break;
    }

    ctx->pc = 0x127920u;

label_127920:
    // 0x127920: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x127920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_127924:
    // 0x127924: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x127924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_127928:
    // 0x127928: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x127928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_12792c:
    // 0x12792c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12792cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_127930:
    // 0x127930: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x127930u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_127934:
    // 0x127934: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x127934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_127938:
    // 0x127938: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x127938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_12793c:
    // 0x12793c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12793cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_127940:
    // 0x127940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x127940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_127944:
    // 0x127944: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_127948:
    // 0x127948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12794c:
    // 0x12794c: 0x78820060  lq          $v0, 0x60($a0)
    ctx->pc = 0x12794cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 96)));
label_127950:
    // 0x127950: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x127950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_127954:
    // 0x127954: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x127954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_127958:
    // 0x127958: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x127958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_12795c:
    // 0x12795c: 0xc04a108  jal         func_128420
label_127960:
    if (ctx->pc == 0x127960u) {
        ctx->pc = 0x127960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12795Cu;
        // 0x127960: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127964u;
        goto label_127964;
    }
    ctx->pc = 0x12795Cu;
    SET_GPR_U32(ctx, 31, 0x127964u);
    ctx->pc = 0x127960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12795Cu;
    // 0x127960: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128420u, 0x12795Cu, 0x127964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127964u;
label_127964:
    // 0x127964: 0x7a020060  lq          $v0, 0x60($s0)
    ctx->pc = 0x127964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 96)));
label_127968:
    // 0x127968: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x127968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_12796c:
    // 0x12796c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x12796cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_127970:
    // 0x127970: 0xc04a544  jal         func_129510
label_127974:
    if (ctx->pc == 0x127974u) {
        ctx->pc = 0x127974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127970u;
        // 0x127974: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127978u;
        goto label_127978;
    }
    ctx->pc = 0x127970u;
    SET_GPR_U32(ctx, 31, 0x127978u);
    ctx->pc = 0x127974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127970u;
    // 0x127974: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129510u, 0x127970u, 0x127978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127978u;
label_127978:
    // 0x127978: 0x7a020060  lq          $v0, 0x60($s0)
    ctx->pc = 0x127978u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 96)));
label_12797c:
    // 0x12797c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x12797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_127980:
    // 0x127980: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x127980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_127984:
    // 0x127984: 0xc04a5e0  jal         func_129780
label_127988:
    if (ctx->pc == 0x127988u) {
        ctx->pc = 0x127988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127984u;
        // 0x127988: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12798Cu;
        goto label_12798c;
    }
    ctx->pc = 0x127984u;
    SET_GPR_U32(ctx, 31, 0x12798Cu);
    ctx->pc = 0x127988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127984u;
    // 0x127988: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129780u, 0x127984u, 0x12798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12798Cu;
label_12798c:
    // 0x12798c: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x12798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_127990:
    // 0x127990: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x127990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_127994:
    // 0x127994: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
label_127998:
    if (ctx->pc == 0x127998u) {
        ctx->pc = 0x127998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127994u;
        // 0x127998: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12799Cu;
        goto label_12799c;
    }
    ctx->pc = 0x127994u;
    {
        const bool branch_taken_0x127994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x127998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127994u;
        // 0x127998: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127994) {
            ctx->pc = 0x127A50u;
            goto label_127a50;
        }
    }
    ctx->pc = 0x12799Cu;
label_12799c:
    // 0x12799c: 0xc05fbe4  jal         func_17EF90
label_1279a0:
    if (ctx->pc == 0x1279A0u) {
        ctx->pc = 0x1279A4u;
        goto label_1279a4;
    }
    ctx->pc = 0x12799Cu;
    SET_GPR_U32(ctx, 31, 0x1279A4u);
    ctx->pc = 0x17EF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EF90u, 0x12799Cu, 0x1279A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279A4u;
label_1279a4:
    // 0x1279a4: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1279a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1279a8:
    // 0x1279a8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1279ac:
    if (ctx->pc == 0x1279ACu) {
        ctx->pc = 0x1279ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279A8u;
        // 0x1279ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1279B0u;
        goto label_1279b0;
    }
    ctx->pc = 0x1279A8u;
    {
        const bool branch_taken_0x1279a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1279ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279A8u;
        // 0x1279ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279a8) {
            ctx->pc = 0x127A50u;
            goto label_127a50;
        }
    }
    ctx->pc = 0x1279B0u;
label_1279b0:
    // 0x1279b0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1279b4:
    if (ctx->pc == 0x1279B4u) {
        ctx->pc = 0x1279B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279B0u;
        // 0x1279b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1279B8u;
        goto label_1279b8;
    }
    ctx->pc = 0x1279B0u;
    {
        const bool branch_taken_0x1279b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1279B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279B0u;
        // 0x1279b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279b0) {
            ctx->pc = 0x127A40u;
            goto label_127a40;
        }
    }
    ctx->pc = 0x1279B8u;
label_1279b8:
    // 0x1279b8: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1279b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1279bc:
    // 0x1279bc: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1279bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1279c0:
    // 0x1279c0: 0x559821  addu        $s3, $v0, $s5
    ctx->pc = 0x1279c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1279c4:
    // 0x1279c4: 0x82620008  lb          $v0, 0x8($s3)
    ctx->pc = 0x1279c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_1279c8:
    // 0x1279c8: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_1279cc:
    if (ctx->pc == 0x1279CCu) {
        ctx->pc = 0x1279D0u;
        goto label_1279d0;
    }
    ctx->pc = 0x1279C8u;
    {
        const bool branch_taken_0x1279c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1279c8) {
            ctx->pc = 0x127A34u;
            goto label_127a34;
        }
    }
    ctx->pc = 0x1279D0u;
label_1279d0:
    // 0x1279d0: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x1279d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1279d4:
    // 0x1279d4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1279d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1279d8:
    // 0x1279d8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1279d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1279dc:
    // 0x1279dc: 0x0  nop
    ctx->pc = 0x1279dcu;
    // NOP
label_1279e0:
    // 0x1279e0: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_1279e4:
    if (ctx->pc == 0x1279E4u) {
        ctx->pc = 0x1279E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279E0u;
        // 0x1279e4: 0xc6610004  lwc1        $f1, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1279E8u;
        goto label_1279e8;
    }
    ctx->pc = 0x1279E0u;
    {
        const bool branch_taken_0x1279e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1279E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279E0u;
        // 0x1279e4: 0xc6610004  lwc1        $f1, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279e0) {
            ctx->pc = 0x127A34u;
            goto label_127a34;
        }
    }
    ctx->pc = 0x1279E8u;
label_1279e8:
    // 0x1279e8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1279e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1279ec:
    // 0x1279ec: 0x0  nop
    ctx->pc = 0x1279ecu;
    // NOP
label_1279f0:
    // 0x1279f0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_1279f4:
    if (ctx->pc == 0x1279F4u) {
        ctx->pc = 0x1279F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279F0u;
        // 0x1279f4: 0x24140009  addiu       $s4, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1279F8u;
        goto label_1279f8;
    }
    ctx->pc = 0x1279F0u;
    {
        const bool branch_taken_0x1279f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1279F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279F0u;
        // 0x1279f4: 0x24140009  addiu       $s4, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279f0) {
            ctx->pc = 0x127A34u;
            goto label_127a34;
        }
    }
    ctx->pc = 0x1279F8u;
label_1279f8:
    // 0x1279f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1279fc:
    if (ctx->pc == 0x1279FCu) {
        ctx->pc = 0x127A00u;
        goto label_127a00;
    }
    ctx->pc = 0x1279F8u;
    {
        const bool branch_taken_0x1279f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1279f8) {
            ctx->pc = 0x127A20u;
            goto label_127a20;
        }
    }
    ctx->pc = 0x127A00u;
label_127a00:
    // 0x127a00: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_127a04:
    if (ctx->pc == 0x127A04u) {
        ctx->pc = 0x127A08u;
        goto label_127a08;
    }
    ctx->pc = 0x127A00u;
    {
        const bool branch_taken_0x127a00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x127a00) {
            ctx->pc = 0x127A10u;
            goto label_127a10;
        }
    }
    ctx->pc = 0x127A08u;
label_127a08:
    // 0x127a08: 0xc05fbe8  jal         func_17EFA0
label_127a0c:
    if (ctx->pc == 0x127A0Cu) {
        ctx->pc = 0x127A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A08u;
        // 0x127a0c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A10u;
        goto label_127a10;
    }
    ctx->pc = 0x127A08u;
    SET_GPR_U32(ctx, 31, 0x127A10u);
    ctx->pc = 0x127A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A08u;
    // 0x127a0c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EFA0u, 0x127A08u, 0x127A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A10u;
label_127a10:
    // 0x127a10: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x127a10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_127a14:
    // 0x127a14: 0xc05fbb4  jal         func_17EED0
label_127a18:
    if (ctx->pc == 0x127A18u) {
        ctx->pc = 0x127A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A14u;
        // 0x127a18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A1Cu;
        goto label_127a1c;
    }
    ctx->pc = 0x127A14u;
    SET_GPR_U32(ctx, 31, 0x127A1Cu);
    ctx->pc = 0x127A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A14u;
    // 0x127a18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EED0u, 0x127A14u, 0x127A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A1Cu;
label_127a1c:
    // 0x127a1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x127a1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_127a20:
    // 0x127a20: 0x274b021  addu        $s6, $s3, $s4
    ctx->pc = 0x127a20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_127a24:
    // 0x127a24: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x127a24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_127a28:
    // 0x127a28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x127a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_127a2c:
    // 0x127a2c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_127a30:
    if (ctx->pc == 0x127A30u) {
        ctx->pc = 0x127A34u;
        goto label_127a34;
    }
    ctx->pc = 0x127A2Cu;
    {
        const bool branch_taken_0x127a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127a2c) {
            ctx->pc = 0x127A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127a00;
        }
    }
    ctx->pc = 0x127A34u;
label_127a34:
    // 0x127a34: 0x0  nop
    ctx->pc = 0x127a34u;
    // NOP
label_127a38:
    // 0x127a38: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x127a38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_127a3c:
    // 0x127a3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x127a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_127a40:
    // 0x127a40: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x127a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_127a44:
    // 0x127a44: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x127a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_127a48:
    // 0x127a48: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_127a4c:
    if (ctx->pc == 0x127A4Cu) {
        ctx->pc = 0x127A50u;
        goto label_127a50;
    }
    ctx->pc = 0x127A48u;
    {
        const bool branch_taken_0x127a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127a48) {
            ctx->pc = 0x1279B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1279b8;
        }
    }
    ctx->pc = 0x127A50u;
label_127a50:
    // 0x127a50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x127a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_127a54:
    // 0x127a54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127a58:
    // 0x127a58: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x127a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_127a5c:
    // 0x127a5c: 0x320f809  jalr        $t9
label_127a60:
    if (ctx->pc == 0x127A60u) {
        ctx->pc = 0x127A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A5Cu;
        // 0x127a60: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A64u;
        goto label_127a64;
    }
    ctx->pc = 0x127A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127A64u);
        ctx->pc = 0x127A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A5Cu;
        // 0x127a60: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127A5Cu, 0x127A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127A64u;
label_127a64:
    // 0x127a64: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x127a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_127a68:
    // 0x127a68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x127a68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_127a6c:
    // 0x127a6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x127a6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_127a70:
    // 0x127a70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x127a70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_127a74:
    // 0x127a74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x127a74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_127a78:
    // 0x127a78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x127a78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_127a7c:
    // 0x127a7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x127a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_127a80:
    // 0x127a80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x127a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_127a84:
    // 0x127a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_127a88:
    // 0x127a88: 0x3e00008  jr          $ra
label_127a8c:
    if (ctx->pc == 0x127A8Cu) {
        ctx->pc = 0x127A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A88u;
        // 0x127a8c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127A90u;
        goto label_fallthrough_0x127a88;
    }
    ctx->pc = 0x127A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A88u;
        // 0x127a8c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x127a88:
    ctx->pc = 0x127A90u;
}
