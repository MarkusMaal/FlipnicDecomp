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

// Function: FUN_001cf030
// Address: 0x1cf030 - 0x1cf3d8
void FUN_001cf030_0x1cf030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cf030_0x1cf030");
#endif

    switch (ctx->pc) {
        case 0x1cf150u: goto label_1cf150;
        case 0x1cf168u: goto label_1cf168;
        case 0x1cf1a8u: goto label_1cf1a8;
        case 0x1cf1b0u: goto label_1cf1b0;
        case 0x1cf1bcu: goto label_1cf1bc;
        case 0x1cf1c4u: goto label_1cf1c4;
        case 0x1cf1d0u: goto label_1cf1d0;
        case 0x1cf1d8u: goto label_1cf1d8;
        case 0x1cf1e4u: goto label_1cf1e4;
        case 0x1cf1f8u: goto label_1cf1f8;
        case 0x1cf204u: goto label_1cf204;
        case 0x1cf230u: goto label_1cf230;
        case 0x1cf248u: goto label_1cf248;
        case 0x1cf268u: goto label_1cf268;
        case 0x1cf27cu: goto label_1cf27c;
        case 0x1cf294u: goto label_1cf294;
        case 0x1cf2a8u: goto label_1cf2a8;
        case 0x1cf2c0u: goto label_1cf2c0;
        case 0x1cf2d4u: goto label_1cf2d4;
        case 0x1cf2ecu: goto label_1cf2ec;
        case 0x1cf308u: goto label_1cf308;
        case 0x1cf320u: goto label_1cf320;
        case 0x1cf33cu: goto label_1cf33c;
        case 0x1cf350u: goto label_1cf350;
        case 0x1cf364u: goto label_1cf364;
        case 0x1cf370u: goto label_1cf370;
        case 0x1cf388u: goto label_1cf388;
        case 0x1cf39cu: goto label_1cf39c;
        case 0x1cf3b0u: goto label_1cf3b0;
        default: break;
    }

    ctx->pc = 0x1cf030u;

    // 0x1cf030: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cf030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cf034: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf038: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1cf038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1cf03c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1cf03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1cf040: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1cf040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1cf044: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1cf044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1cf048: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1cf048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1cf04c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cf04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cf050: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cf050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cf054: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1cf054u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cf058: 0x8022fb60  lb          $v0, -0x4A0($at)
    ctx->pc = 0x1cf058u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB60u));
    // 0x1cf05c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF05Cu;
    {
        const bool branch_taken_0x1cf05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF05Cu;
        // 0x1cf060: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf05c) {
            ctx->pc = 0x1CF07Cu;
            goto label_1cf07c;
        }
    }
    ctx->pc = 0x1CF064u;
    // 0x1cf064: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cf064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf068: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf06c: 0xac23fb58  sw          $v1, -0x4A8($at)
    ctx->pc = 0x1cf06cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB58u, _value); } while (0);
    // 0x1cf070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf074: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf078: 0xa022fb60  sb          $v0, -0x4A0($at)
    ctx->pc = 0x1cf078u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB60u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB60u, _value); } while (0);
label_1cf07c:
    // 0x1cf07c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf080: 0x8022fb70  lb          $v0, -0x490($at)
    ctx->pc = 0x1cf080u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB70u));
    // 0x1cf084: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF084u;
    {
        const bool branch_taken_0x1cf084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf084) {
            ctx->pc = 0x1CF0A4u;
            goto label_1cf0a4;
        }
    }
    ctx->pc = 0x1CF08Cu;
    // 0x1cf08c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cf08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf090: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf094: 0xac23fb68  sw          $v1, -0x498($at)
    ctx->pc = 0x1cf094u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB68u, _value); } while (0);
    // 0x1cf098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf09c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0a0: 0xa022fb70  sb          $v0, -0x490($at)
    ctx->pc = 0x1cf0a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB70u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB70u, _value); } while (0);
label_1cf0a4:
    // 0x1cf0a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0a8: 0x8022fb80  lb          $v0, -0x480($at)
    ctx->pc = 0x1cf0a8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB80u));
    // 0x1cf0ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF0ACu;
    {
        const bool branch_taken_0x1cf0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf0ac) {
            ctx->pc = 0x1CF0CCu;
            goto label_1cf0cc;
        }
    }
    ctx->pc = 0x1CF0B4u;
    // 0x1cf0b4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1cf0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1cf0b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0bc: 0xac23fb78  sw          $v1, -0x488($at)
    ctx->pc = 0x1cf0bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB78u, _value); } while (0);
    // 0x1cf0c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf0c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0c8: 0xa022fb80  sb          $v0, -0x480($at)
    ctx->pc = 0x1cf0c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB80u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB80u, _value); } while (0);
label_1cf0cc:
    // 0x1cf0cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0d0: 0x8022fb90  lb          $v0, -0x470($at)
    ctx->pc = 0x1cf0d0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB90u));
    // 0x1cf0d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF0D4u;
    {
        const bool branch_taken_0x1cf0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf0d4) {
            ctx->pc = 0x1CF0F4u;
            goto label_1cf0f4;
        }
    }
    ctx->pc = 0x1CF0DCu;
    // 0x1cf0dc: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x1cf0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x1cf0e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0e4: 0xac23fb88  sw          $v1, -0x478($at)
    ctx->pc = 0x1cf0e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB88u, _value); } while (0);
    // 0x1cf0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf0ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0f0: 0xa022fb90  sb          $v0, -0x470($at)
    ctx->pc = 0x1cf0f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB90u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB90u, _value); } while (0);
label_1cf0f4:
    // 0x1cf0f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0f8: 0x8022fba0  lb          $v0, -0x460($at)
    ctx->pc = 0x1cf0f8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FBA0u));
    // 0x1cf0fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF0FCu;
    {
        const bool branch_taken_0x1cf0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0FCu;
        // 0x1cf100: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0fc) {
            ctx->pc = 0x1CF120u;
            goto label_1cf120;
        }
    }
    ctx->pc = 0x1CF104u;
    // 0x1cf104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf108: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf10c: 0xa022fba0  sb          $v0, -0x460($at)
    ctx->pc = 0x1cf10cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FBA0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FBA0u, _value); } while (0);
    // 0x1cf110: 0x3c03440e  lui         $v1, 0x440E
    ctx->pc = 0x1cf110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17422 << 16));
    // 0x1cf114: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x1cf114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1cf118: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf11c: 0xac22fb98  sw          $v0, -0x468($at)
    ctx->pc = 0x1cf11cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB98u, _value); } while (0);
label_1cf120:
    // 0x1cf120: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1cf120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1cf124: 0x24a59820  addiu       $a1, $a1, -0x67E0
    ctx->pc = 0x1cf124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940704));
    // 0x1cf128: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cf128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cf12c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1cf12cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cf130: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1cf130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf134: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cf134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf138: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1cf138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cf13c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1cf13cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1cf140: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1cf140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1cf144: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf148: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CF148u;
    SET_GPR_U32(ctx, 31, 0x1CF150u);
    ctx->pc = 0x1CF14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF148u;
    // 0x1cf14c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CF148u, 0x1CF150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF150u;
label_1cf150:
    // 0x1cf150: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf154: 0xc42cfb58  lwc1        $f12, -0x4A8($at)
    ctx->pc = 0x1cf154u;
    { uint32_t bits = FAST_READ32(0x36FB58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf158: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf15c: 0xc42dfb68  lwc1        $f13, -0x498($at)
    ctx->pc = 0x1cf15cu;
    { uint32_t bits = FAST_READ32(0x36FB68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cf160: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1CF160u;
    SET_GPR_U32(ctx, 31, 0x1CF168u);
    ctx->pc = 0x1CF164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF160u;
    // 0x1cf164: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1CF160u, 0x1CF168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF168u;
label_1cf168:
    // 0x1cf168: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf16c: 0x8c23fba8  lw          $v1, -0x458($at)
    ctx->pc = 0x1cf16cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FBA8u));
    // 0x1cf170: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf174: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cf174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cf178: 0x8022fbb8  lb          $v0, -0x448($at)
    ctx->pc = 0x1cf178u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FBB8u));
    // 0x1cf17c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf180: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF180u;
    {
        const bool branch_taken_0x1cf180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF180u;
        // 0x1cf184: 0xac23fba8  sw          $v1, -0x458($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf180) {
            ctx->pc = 0x1CF1A0u;
            goto label_1cf1a0;
        }
    }
    ctx->pc = 0x1CF188u;
    // 0x1cf188: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cf188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf18c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf190: 0xac23fbb0  sw          $v1, -0x450($at)
    ctx->pc = 0x1cf190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FBB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FBB0u, _value); } while (0);
    // 0x1cf194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf198: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf19c: 0xa022fbb8  sb          $v0, -0x448($at)
    ctx->pc = 0x1cf19cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FBB8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FBB8u, _value); } while (0);
label_1cf1a0:
    // 0x1cf1a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cf1a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf1a8:
    // 0x1cf1a8: 0xc073178  jal         func_1CC5E0
    ctx->pc = 0x1CF1A8u;
    SET_GPR_U32(ctx, 31, 0x1CF1B0u);
    ctx->pc = 0x1CC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5E0u, 0x1CF1A8u, 0x1CF1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1B0u;
label_1cf1b0:
    // 0x1cf1b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1b4: 0xc072f34  jal         func_1CBCD0
    ctx->pc = 0x1CF1B4u;
    SET_GPR_U32(ctx, 31, 0x1CF1BCu);
    ctx->pc = 0x1CF1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1B4u;
    // 0x1cf1b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCD0u, 0x1CF1B4u, 0x1CF1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1BCu;
label_1cf1bc:
    // 0x1cf1bc: 0xc073178  jal         func_1CC5E0
    ctx->pc = 0x1CF1BCu;
    SET_GPR_U32(ctx, 31, 0x1CF1C4u);
    ctx->pc = 0x1CF1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1BCu;
    // 0x1cf1c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5E0u, 0x1CF1BCu, 0x1CF1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1C4u;
label_1cf1c4:
    // 0x1cf1c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1c8: 0xc072f78  jal         func_1CBDE0
    ctx->pc = 0x1CF1C8u;
    SET_GPR_U32(ctx, 31, 0x1CF1D0u);
    ctx->pc = 0x1CF1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1C8u;
    // 0x1cf1cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBDE0u, 0x1CF1C8u, 0x1CF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1D0u;
label_1cf1d0:
    // 0x1cf1d0: 0xc073178  jal         func_1CC5E0
    ctx->pc = 0x1CF1D0u;
    SET_GPR_U32(ctx, 31, 0x1CF1D8u);
    ctx->pc = 0x1CF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1D0u;
    // 0x1cf1d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5E0u, 0x1CF1D0u, 0x1CF1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1D8u;
label_1cf1d8:
    // 0x1cf1d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1dc: 0xc072fb0  jal         func_1CBEC0
    ctx->pc = 0x1CF1DCu;
    SET_GPR_U32(ctx, 31, 0x1CF1E4u);
    ctx->pc = 0x1CF1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1DCu;
    // 0x1cf1e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBEC0u, 0x1CF1DCu, 0x1CF1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1E4u;
label_1cf1e4:
    // 0x1cf1e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cf1e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cf1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf1f0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CF1F0u;
    SET_GPR_U32(ctx, 31, 0x1CF1F8u);
    ctx->pc = 0x1CF1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1F0u;
    // 0x1cf1f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CF1F0u, 0x1CF1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1F8u;
label_1cf1f8:
    // 0x1cf1f8: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1cf1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1cf1fc: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1CF1FCu;
    SET_GPR_U32(ctx, 31, 0x1CF204u);
    ctx->pc = 0x1CF200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1FCu;
    // 0x1cf200: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1CF1FCu, 0x1CF204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF204u;
label_1cf204:
    // 0x1cf204: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf208: 0x8c22fb50  lw          $v0, -0x4B0($at)
    ctx->pc = 0x1cf208u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36FB50u));
    // 0x1cf20c: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF20Cu;
    {
        const bool branch_taken_0x1cf20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1cf20c) {
            ctx->pc = 0x1CF230u;
            goto label_1cf230;
        }
    }
    ctx->pc = 0x1CF214u;
    // 0x1cf214: 0x92a20080  lbu         $v0, 0x80($s5)
    ctx->pc = 0x1cf214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1cf218: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF218u;
    {
        const bool branch_taken_0x1cf218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF218u;
        // 0x1cf21c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf218) {
            ctx->pc = 0x1CF230u;
            goto label_1cf230;
        }
    }
    ctx->pc = 0x1CF220u;
    // 0x1cf220: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1cf220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1cf224: 0x24c694b0  addiu       $a2, $a2, -0x6B50
    ctx->pc = 0x1cf224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939824));
    // 0x1cf228: 0xc07d376  jal         func_1F4DD8
    ctx->pc = 0x1CF228u;
    SET_GPR_U32(ctx, 31, 0x1CF230u);
    ctx->pc = 0x1CF22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF228u;
    // 0x1cf22c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DD8u, 0x1CF228u, 0x1CF230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF230u;
label_1cf230:
    // 0x1cf230: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x1cf230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf234: 0xc7ad00a4  lwc1        $f13, 0xA4($sp)
    ctx->pc = 0x1cf234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cf238: 0xc7ae00a8  lwc1        $f14, 0xA8($sp)
    ctx->pc = 0x1cf238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cf23c: 0xc7af00ac  lwc1        $f15, 0xAC($sp)
    ctx->pc = 0x1cf23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1cf240: 0xc062860  jal         func_18A180
    ctx->pc = 0x1CF240u;
    SET_GPR_U32(ctx, 31, 0x1CF248u);
    ctx->pc = 0x1CF244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF240u;
    // 0x1cf244: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1CF240u, 0x1CF248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF248u;
label_1cf248:
    // 0x1cf248: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1cf248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1cf24c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf250: 0xc4540080  lwc1        $f20, 0x80($v0)
    ctx->pc = 0x1cf250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cf254: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf258: 0xc42cfb78  lwc1        $f12, -0x488($at)
    ctx->pc = 0x1cf258u;
    { uint32_t bits = FAST_READ32(0x36FB78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf25c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1cf25cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cf260: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CF260u;
    SET_GPR_U32(ctx, 31, 0x1CF268u);
    ctx->pc = 0x1CF264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF260u;
    // 0x1cf264: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CF260u, 0x1CF268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF268u;
label_1cf268:
    // 0x1cf268: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf26c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf270: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cf270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf274: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CF274u;
    SET_GPR_U32(ctx, 31, 0x1CF27Cu);
    ctx->pc = 0x1CF278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF274u;
    // 0x1cf278: 0x24a53168  addiu       $a1, $a1, 0x3168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CF274u, 0x1CF27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF27Cu;
label_1cf27c:
    // 0x1cf27c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf280: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf284: 0xc42cfb88  lwc1        $f12, -0x478($at)
    ctx->pc = 0x1cf284u;
    { uint32_t bits = FAST_READ32(0x36FB88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf288: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1cf288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cf28c: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CF28Cu;
    SET_GPR_U32(ctx, 31, 0x1CF294u);
    ctx->pc = 0x1CF290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF28Cu;
    // 0x1cf290: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CF28Cu, 0x1CF294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF294u;
label_1cf294:
    // 0x1cf294: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf298: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf29c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cf29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2a0: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CF2A0u;
    SET_GPR_U32(ctx, 31, 0x1CF2A8u);
    ctx->pc = 0x1CF2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2A0u;
    // 0x1cf2a4: 0x24a53168  addiu       $a1, $a1, 0x3168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CF2A0u, 0x1CF2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2A8u;
label_1cf2a8:
    // 0x1cf2a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf2ac: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf2b0: 0xc42cfb98  lwc1        $f12, -0x468($at)
    ctx->pc = 0x1cf2b0u;
    { uint32_t bits = FAST_READ32(0x36FB98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf2b4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1cf2b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cf2b8: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CF2B8u;
    SET_GPR_U32(ctx, 31, 0x1CF2C0u);
    ctx->pc = 0x1CF2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2B8u;
    // 0x1cf2bc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CF2B8u, 0x1CF2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2C0u;
label_1cf2c0:
    // 0x1cf2c0: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf2c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf2c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1cf2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2cc: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CF2CCu;
    SET_GPR_U32(ctx, 31, 0x1CF2D4u);
    ctx->pc = 0x1CF2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2CCu;
    // 0x1cf2d0: 0x24a53168  addiu       $a1, $a1, 0x3168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CF2CCu, 0x1CF2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2D4u;
label_1cf2d4:
    // 0x1cf2d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cf2d8: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1cf2d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cf2dc: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x1CF2DCu;
    {
        const bool branch_taken_0x1cf2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2DCu;
        // 0x1cf2e0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2dc) {
            ctx->pc = 0x1CF1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf1a8;
        }
    }
    ctx->pc = 0x1CF2E4u;
    // 0x1cf2e4: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1CF2E4u;
    SET_GPR_U32(ctx, 31, 0x1CF2ECu);
    ctx->pc = 0x1CF2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2E4u;
    // 0x1cf2e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1CF2E4u, 0x1CF2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2ECu;
label_1cf2ec:
    // 0x1cf2ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf2f4: 0x9023fb48  lbu         $v1, -0x4B8($at)
    ctx->pc = 0x1cf2f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x36FB48u));
    // 0x1cf2f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF2F8u;
    {
        const bool branch_taken_0x1cf2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2F8u;
        // 0x1cf2fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2f8) {
            ctx->pc = 0x1CF310u;
            goto label_1cf310;
        }
    }
    ctx->pc = 0x1CF300u;
    // 0x1cf300: 0xc073cf8  jal         func_1CF3E0
    ctx->pc = 0x1CF300u;
    SET_GPR_U32(ctx, 31, 0x1CF308u);
    ctx->pc = 0x1CF304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF300u;
    // 0x1cf304: 0xa2a00040  sb          $zero, 0x40($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 64), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3E0u, 0x1CF300u, 0x1CF308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF308u;
label_1cf308:
    // 0x1cf308: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1CF308u;
    {
        const bool branch_taken_0x1cf308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF308u;
        // 0x1cf30c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf308) {
            ctx->pc = 0x1CF3B4u;
            goto label_1cf3b4;
        }
    }
    ctx->pc = 0x1CF310u;
label_1cf310:
    // 0x1cf310: 0xa2a20040  sb          $v0, 0x40($s5)
    ctx->pc = 0x1cf310u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cf314: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf318: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CF318u;
    SET_GPR_U32(ctx, 31, 0x1CF320u);
    ctx->pc = 0x1CF31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF318u;
    // 0x1cf31c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CF318u, 0x1CF320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF320u;
label_1cf320:
    // 0x1cf320: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CF320u;
    {
        const bool branch_taken_0x1cf320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF320u;
        // 0x1cf324: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf320) {
            ctx->pc = 0x1CF368u;
            goto label_1cf368;
        }
    }
    ctx->pc = 0x1CF328u;
    // 0x1cf328: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf32c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cf32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf330: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf334: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CF334u;
    SET_GPR_U32(ctx, 31, 0x1CF33Cu);
    ctx->pc = 0x1CF338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF334u;
    // 0x1cf338: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CF334u, 0x1CF33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF33Cu;
label_1cf33c:
    // 0x1cf33c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf340: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf344: 0x24a59690  addiu       $a1, $a1, -0x6970
    ctx->pc = 0x1cf344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940304));
    // 0x1cf348: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CF348u;
    SET_GPR_U32(ctx, 31, 0x1CF350u);
    ctx->pc = 0x1CF34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF348u;
    // 0x1cf34c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CF348u, 0x1CF350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF350u;
label_1cf350:
    // 0x1cf350: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf354: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf358: 0x24a59740  addiu       $a1, $a1, -0x68C0
    ctx->pc = 0x1cf358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940480));
    // 0x1cf35c: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CF35Cu;
    SET_GPR_U32(ctx, 31, 0x1CF364u);
    ctx->pc = 0x1CF360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF35Cu;
    // 0x1cf360: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CF35Cu, 0x1CF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF364u;
label_1cf364:
    // 0x1cf364: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cf368:
    // 0x1cf368: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CF368u;
    SET_GPR_U32(ctx, 31, 0x1CF370u);
    ctx->pc = 0x1CF36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF368u;
    // 0x1cf36c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CF368u, 0x1CF370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF370u;
label_1cf370:
    // 0x1cf370: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CF370u;
    {
        const bool branch_taken_0x1cf370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF370u;
        // 0x1cf374: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf370) {
            ctx->pc = 0x1CF3B0u;
            goto label_1cf3b0;
        }
    }
    ctx->pc = 0x1CF378u;
    // 0x1cf378: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cf378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf37c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf380: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CF380u;
    SET_GPR_U32(ctx, 31, 0x1CF388u);
    ctx->pc = 0x1CF384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF380u;
    // 0x1cf384: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CF380u, 0x1CF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF388u;
label_1cf388:
    // 0x1cf388: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf38c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf390: 0x24a59690  addiu       $a1, $a1, -0x6970
    ctx->pc = 0x1cf390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940304));
    // 0x1cf394: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CF394u;
    SET_GPR_U32(ctx, 31, 0x1CF39Cu);
    ctx->pc = 0x1CF398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF394u;
    // 0x1cf398: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CF394u, 0x1CF39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF39Cu;
label_1cf39c:
    // 0x1cf39c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf39cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf3a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf3a4: 0x24a59740  addiu       $a1, $a1, -0x68C0
    ctx->pc = 0x1cf3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940480));
    // 0x1cf3a8: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CF3A8u;
    SET_GPR_U32(ctx, 31, 0x1CF3B0u);
    ctx->pc = 0x1CF3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF3A8u;
    // 0x1cf3ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CF3A8u, 0x1CF3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF3B0u;
label_1cf3b0:
    // 0x1cf3b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1cf3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1cf3b4:
    // 0x1cf3b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1cf3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cf3b8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1cf3b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cf3bc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1cf3bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cf3c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1cf3c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf3c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1cf3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf3c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cf3c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf3cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cf3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3D0u;
        // 0x1cf3d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF3D8u;
}
