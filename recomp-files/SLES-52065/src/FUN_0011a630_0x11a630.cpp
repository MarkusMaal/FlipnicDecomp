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

// Function: FUN_0011a630
// Address: 0x11a630 - 0x11a89c
void FUN_0011a630_0x11a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a630_0x11a630");
#endif

    switch (ctx->pc) {
        case 0x11a7a0u: goto label_11a7a0;
        case 0x11a7e4u: goto label_11a7e4;
        case 0x11a7f4u: goto label_11a7f4;
        case 0x11a82cu: goto label_11a82c;
        case 0x11a83cu: goto label_11a83c;
        case 0x11a844u: goto label_11a844;
        case 0x11a854u: goto label_11a854;
        case 0x11a874u: goto label_11a874;
        case 0x11a880u: goto label_11a880;
        case 0x11a888u: goto label_11a888;
        default: break;
    }

    ctx->pc = 0x11a630u;

    // 0x11a630: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11a634: 0x3c025453  lui         $v0, 0x5453
    ctx->pc = 0x11a634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21587 << 16));
    // 0x11a638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a63c: 0x34475845  ori         $a3, $v0, 0x5845
    ctx->pc = 0x11a63cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22597);
    // 0x11a640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a644: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x11a644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11a648: 0xac8000f4  sw          $zero, 0xF4($a0)
    ctx->pc = 0x11a648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 0));
    // 0x11a64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a650: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x11a650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
    // 0x11a654: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x11a654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x11a658: 0xac8000fc  sw          $zero, 0xFC($a0)
    ctx->pc = 0x11a658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
    // 0x11a65c: 0x3408ac44  ori         $t0, $zero, 0xAC44
    ctx->pc = 0x11a65cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
    // 0x11a660: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x11a660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x11a664: 0x24022fdf  addiu       $v0, $zero, 0x2FDF
    ctx->pc = 0x11a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12255));
    // 0x11a668: 0xa08003c4  sb          $zero, 0x3C4($a0)
    ctx->pc = 0x11a668u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 964), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a66c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a670: 0xac800524  sw          $zero, 0x524($a0)
    ctx->pc = 0x11a670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1316), GPR_U32(ctx, 0));
    // 0x11a674: 0xaf8383f0  sw          $v1, -0x7C10($gp)
    ctx->pc = 0x11a674u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 3));
    // 0x11a678: 0xaf8683e0  sw          $a2, -0x7C20($gp)
    ctx->pc = 0x11a678u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935520), GPR_U32(ctx, 6));
    // 0x11a67c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11a680: 0xff8683e8  sd          $a2, -0x7C18($gp)
    ctx->pc = 0x11a680u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935528), GPR_U64(ctx, 6));
    // 0x11a684: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x11a684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x11a688: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x11a688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x11a68c: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x11a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x11a690: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x11a690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x11a694: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x11a694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x11a698: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x11a698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x11a69c: 0xac87007c  sw          $a3, 0x7C($a0)
    ctx->pc = 0x11a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 7));
    // 0x11a6a0: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x11a6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x11a6a4: 0xac880084  sw          $t0, 0x84($a0)
    ctx->pc = 0x11a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 8));
    // 0x11a6a8: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x11a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x11a6ac: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x11a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x11a6b0: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x11a6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x11a6b4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x11a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x11a6b8: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x11a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x11a6bc: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x11a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x11a6c0: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x11a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x11a6c4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x11a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x11a6c8: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x11a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x11a6cc: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x11a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x11a6d0: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x11a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x11a6d4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x11a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x11a6d8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x11a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x11a6dc: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x11a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x11a6e0: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x11a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x11a6e4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x11a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x11a6e8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x11a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x11a6ec: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x11a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x11a6f0: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x11a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x11a6f4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x11a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x11a6f8: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x11a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x11a6fc: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x11a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x11a700: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x11a700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x11a704: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x11a704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x11a708: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x11a708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x11a70c: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x11a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x11a710: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x11a710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x11a714: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x11a714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x11a718: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x11a718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x11a71c: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x11a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x11a720: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x11a720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x11a724: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x11a724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x11a728: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x11a728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x11a72c: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x11a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x11a730: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x11a730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x11a734: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x11a734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x11a738: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x11a738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x11a73c: 0xac820094  sw          $v0, 0x94($a0)
    ctx->pc = 0x11a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x11a740: 0xac8200b4  sw          $v0, 0xB4($a0)
    ctx->pc = 0x11a740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
    // 0x11a744: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x11a744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x11a748: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x11a748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x11a74c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x11a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x11a750: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x11a750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x11a754: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x11a754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x11a758: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x11a758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x11a75c: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x11a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x11a760: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x11a760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x11a764: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x11a764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x11a768: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x11a768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x11a76c: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x11a76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x11a770: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x11a770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x11a774: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x11a774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x11a778: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x11a778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
    // 0x11a77c: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x11a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x11a780: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x11a780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
    // 0x11a784: 0x8f8283c0  lw          $v0, -0x7C40($gp)
    ctx->pc = 0x11a784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935488)));
    // 0x11a788: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x11a788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x11a78c: 0x8f8283b4  lw          $v0, -0x7C4C($gp)
    ctx->pc = 0x11a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935476)));
    // 0x11a790: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x11A790u;
    {
        const bool branch_taken_0x11a790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A790u;
        // 0x11a794: 0xaf9083c0  sw          $s0, -0x7C40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935488), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a790) {
            ctx->pc = 0x11A888u;
            goto label_11a888;
        }
    }
    ctx->pc = 0x11A798u;
    // 0x11a798: 0xc082cf4  jal         func_20B3D0
    ctx->pc = 0x11A798u;
    SET_GPR_U32(ctx, 31, 0x11A7A0u);
    ctx->pc = 0x20B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B3D0u, 0x11A798u, 0x11A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7A0u;
label_11a7a0:
    // 0x11a7a0: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x11a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x11a7a4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x11a7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x11a7a8: 0x2442a5a0  addiu       $v0, $v0, -0x5A60
    ctx->pc = 0x11a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944160));
    // 0x11a7ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x11a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11a7b0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x11a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x11a7b4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x11a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x11a7b8: 0xaf8083c4  sw          $zero, -0x7C3C($gp)
    ctx->pc = 0x11a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935492), GPR_U32(ctx, 0));
    // 0x11a7bc: 0x2442dc40  addiu       $v0, $v0, -0x23C0
    ctx->pc = 0x11a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
    // 0x11a7c0: 0xa020dae0  sb          $zero, -0x2520($at)
    ctx->pc = 0x11a7c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2ADAE0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2ADAE0u, _value); } while (0);
    // 0x11a7c4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x11a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x11a7c8: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x11a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x11a7cc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x11a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x11a7d0: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x11a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11a7d4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x11a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x11a7d8: 0x27820000  addiu       $v0, $gp, 0x0
    ctx->pc = 0x11a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x11a7dc: 0xc07ad08  jal         func_1EB420
    ctx->pc = 0x11A7DCu;
    SET_GPR_U32(ctx, 31, 0x11A7E4u);
    ctx->pc = 0x11A7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7DCu;
    // 0x11a7e0: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB420u, 0x11A7DCu, 0x11A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7E4u;
label_11a7e4:
    // 0x11a7e4: 0xaf8283cc  sw          $v0, -0x7C34($gp)
    ctx->pc = 0x11a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935500), GPR_U32(ctx, 2));
    // 0x11a7e8: 0x8f8483cc  lw          $a0, -0x7C34($gp)
    ctx->pc = 0x11a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935500)));
    // 0x11a7ec: 0xc07ad10  jal         func_1EB440
    ctx->pc = 0x11A7ECu;
    SET_GPR_U32(ctx, 31, 0x11A7F4u);
    ctx->pc = 0x11A7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7ECu;
    // 0x11a7f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB440u, 0x11A7ECu, 0x11A7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7F4u;
label_11a7f4:
    // 0x11a7f4: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x11a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x11a7f8: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x11a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x11a7fc: 0x2442a5f0  addiu       $v0, $v0, -0x5A10
    ctx->pc = 0x11a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944240));
    // 0x11a800: 0x2463ec40  addiu       $v1, $v1, -0x13C0
    ctx->pc = 0x11a800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962240));
    // 0x11a804: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x11a804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x11a808: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11a808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11a80c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x11a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x11a810: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x11a810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x11a814: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x11a814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x11a818: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x11a818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x11a81c: 0x27820000  addiu       $v0, $gp, 0x0
    ctx->pc = 0x11a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x11a820: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x11a820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x11a824: 0xc07ad08  jal         func_1EB420
    ctx->pc = 0x11A824u;
    SET_GPR_U32(ctx, 31, 0x11A82Cu);
    ctx->pc = 0x11A828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A824u;
    // 0x11a828: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB420u, 0x11A824u, 0x11A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A82Cu;
label_11a82c:
    // 0x11a82c: 0xaf8283d0  sw          $v0, -0x7C30($gp)
    ctx->pc = 0x11a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935504), GPR_U32(ctx, 2));
    // 0x11a830: 0x8f8483d0  lw          $a0, -0x7C30($gp)
    ctx->pc = 0x11a830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935504)));
    // 0x11a834: 0xc07ad10  jal         func_1EB440
    ctx->pc = 0x11A834u;
    SET_GPR_U32(ctx, 31, 0x11A83Cu);
    ctx->pc = 0x11A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A834u;
    // 0x11a838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB440u, 0x11A834u, 0x11A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A83Cu;
label_11a83c:
    // 0x11a83c: 0xc07ad44  jal         func_1EB510
    ctx->pc = 0x11A83Cu;
    SET_GPR_U32(ctx, 31, 0x11A844u);
    ctx->pc = 0x1EB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB510u, 0x11A83Cu, 0x11A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A844u;
label_11a844:
    // 0x11a844: 0xaf8283d4  sw          $v0, -0x7C2C($gp)
    ctx->pc = 0x11a844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935508), GPR_U32(ctx, 2));
    // 0x11a848: 0x8f8483d4  lw          $a0, -0x7C2C($gp)
    ctx->pc = 0x11a848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935508)));
    // 0x11a84c: 0xc07ad2c  jal         func_1EB4B0
    ctx->pc = 0x11A84Cu;
    SET_GPR_U32(ctx, 31, 0x11A854u);
    ctx->pc = 0x11A850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A84Cu;
    // 0x11a850: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB4B0u, 0x11A84Cu, 0x11A854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A854u;
label_11a854:
    // 0x11a854: 0xaf8283d8  sw          $v0, -0x7C28($gp)
    ctx->pc = 0x11a854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935512), GPR_U32(ctx, 2));
    // 0x11a858: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11a858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11a85c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a860: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x11a860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11a864: 0xaf8283b4  sw          $v0, -0x7C4C($gp)
    ctx->pc = 0x11a864u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935476), GPR_U32(ctx, 2));
    // 0x11a868: 0x24a5a530  addiu       $a1, $a1, -0x5AD0
    ctx->pc = 0x11a868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944048));
    // 0x11a86c: 0xc07acc0  jal         func_1EB300
    ctx->pc = 0x11A86Cu;
    SET_GPR_U32(ctx, 31, 0x11A874u);
    ctx->pc = 0x11A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A86Cu;
    // 0x11a870: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB300u, 0x11A86Cu, 0x11A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A874u;
label_11a874:
    // 0x11a874: 0xaf8283c8  sw          $v0, -0x7C38($gp)
    ctx->pc = 0x11a874u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935496), GPR_U32(ctx, 2));
    // 0x11a878: 0xc082ae4  jal         func_20AB90
    ctx->pc = 0x11A878u;
    SET_GPR_U32(ctx, 31, 0x11A880u);
    ctx->pc = 0x11A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A878u;
    // 0x11a87c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AB90u, 0x11A878u, 0x11A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A880u;
label_11a880:
    // 0x11a880: 0xc07b05a  jal         func_1EC168
    ctx->pc = 0x11A880u;
    SET_GPR_U32(ctx, 31, 0x11A888u);
    ctx->pc = 0x11A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A880u;
    // 0x11a884: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC168u, 0x11A880u, 0x11A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A888u;
label_11a888:
    // 0x11a888: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11a888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a88c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11a890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a894: 0x3e00008  jr          $ra
    ctx->pc = 0x11A894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A894u;
        // 0x11a898: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A89Cu;
}
