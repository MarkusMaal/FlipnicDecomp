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

// Function: FUN_00107560
// Address: 0x107560 - 0x107770
void FUN_00107560_0x107560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00107560_0x107560");
#endif

    switch (ctx->pc) {
        case 0x107570u: goto label_107570;
        case 0x107654u: goto label_107654;
        case 0x107738u: goto label_107738;
        default: break;
    }

    ctx->pc = 0x107560u;

    // 0x107560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x107560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107568: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x107568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x10756c: 0x2484fd90  addiu       $a0, $a0, -0x270
    ctx->pc = 0x10756cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966672));
label_107570:
    // 0x107570: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x107570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x107574: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x107574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x107578: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x107578u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x10757c: 0x28a30018  slti        $v1, $a1, 0x18
    ctx->pc = 0x10757cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x107580: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x107580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x107584: 0x24c600c0  addiu       $a2, $a2, 0xC0
    ctx->pc = 0x107584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x107588: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x107588u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x10758c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x10758cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x107590: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x107590u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x107594: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x107594u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x107598: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x107598u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x10759c: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x10759cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x1075a0: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x1075a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x1075a4: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x1075a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x1075a8: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x1075a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x1075ac: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x1075acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x1075b0: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x1075b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x1075b4: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x1075b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x1075b8: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x1075b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x1075bc: 0xace0003c  sw          $zero, 0x3C($a3)
    ctx->pc = 0x1075bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
    // 0x1075c0: 0xace00040  sw          $zero, 0x40($a3)
    ctx->pc = 0x1075c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
    // 0x1075c4: 0xace00044  sw          $zero, 0x44($a3)
    ctx->pc = 0x1075c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 0));
    // 0x1075c8: 0xace00048  sw          $zero, 0x48($a3)
    ctx->pc = 0x1075c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 0));
    // 0x1075cc: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x1075ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x1075d0: 0xace00050  sw          $zero, 0x50($a3)
    ctx->pc = 0x1075d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 0));
    // 0x1075d4: 0xace00054  sw          $zero, 0x54($a3)
    ctx->pc = 0x1075d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 0));
    // 0x1075d8: 0xace00058  sw          $zero, 0x58($a3)
    ctx->pc = 0x1075d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 0));
    // 0x1075dc: 0xace0005c  sw          $zero, 0x5C($a3)
    ctx->pc = 0x1075dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 0));
    // 0x1075e0: 0xace00060  sw          $zero, 0x60($a3)
    ctx->pc = 0x1075e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 0));
    // 0x1075e4: 0xace00064  sw          $zero, 0x64($a3)
    ctx->pc = 0x1075e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 0));
    // 0x1075e8: 0xace00068  sw          $zero, 0x68($a3)
    ctx->pc = 0x1075e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 0));
    // 0x1075ec: 0xace0006c  sw          $zero, 0x6C($a3)
    ctx->pc = 0x1075ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 0));
    // 0x1075f0: 0xace00070  sw          $zero, 0x70($a3)
    ctx->pc = 0x1075f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 112), GPR_U32(ctx, 0));
    // 0x1075f4: 0xace00074  sw          $zero, 0x74($a3)
    ctx->pc = 0x1075f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
    // 0x1075f8: 0xace00078  sw          $zero, 0x78($a3)
    ctx->pc = 0x1075f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 0));
    // 0x1075fc: 0xace0007c  sw          $zero, 0x7C($a3)
    ctx->pc = 0x1075fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 0));
    // 0x107600: 0xace00080  sw          $zero, 0x80($a3)
    ctx->pc = 0x107600u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 0));
    // 0x107604: 0xace00084  sw          $zero, 0x84($a3)
    ctx->pc = 0x107604u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 0));
    // 0x107608: 0xace00088  sw          $zero, 0x88($a3)
    ctx->pc = 0x107608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 0));
    // 0x10760c: 0xace0008c  sw          $zero, 0x8C($a3)
    ctx->pc = 0x10760cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 140), GPR_U32(ctx, 0));
    // 0x107610: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x107610u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x107614: 0xace00094  sw          $zero, 0x94($a3)
    ctx->pc = 0x107614u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
    // 0x107618: 0xace00098  sw          $zero, 0x98($a3)
    ctx->pc = 0x107618u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 0));
    // 0x10761c: 0xace0009c  sw          $zero, 0x9C($a3)
    ctx->pc = 0x10761cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 0));
    // 0x107620: 0xace000a0  sw          $zero, 0xA0($a3)
    ctx->pc = 0x107620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 0));
    // 0x107624: 0xace000a4  sw          $zero, 0xA4($a3)
    ctx->pc = 0x107624u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 0));
    // 0x107628: 0xace000a8  sw          $zero, 0xA8($a3)
    ctx->pc = 0x107628u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 0));
    // 0x10762c: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x10762cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
    // 0x107630: 0xace000b0  sw          $zero, 0xB0($a3)
    ctx->pc = 0x107630u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 176), GPR_U32(ctx, 0));
    // 0x107634: 0xace000b4  sw          $zero, 0xB4($a3)
    ctx->pc = 0x107634u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 180), GPR_U32(ctx, 0));
    // 0x107638: 0xace000b8  sw          $zero, 0xB8($a3)
    ctx->pc = 0x107638u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 184), GPR_U32(ctx, 0));
    // 0x10763c: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x10763Cu;
    {
        const bool branch_taken_0x10763c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10763Cu;
        // 0x107640: 0xace000bc  sw          $zero, 0xBC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10763c) {
            ctx->pc = 0x107570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107570;
        }
    }
    ctx->pc = 0x107644u;
    // 0x107644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x107644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x107648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10764c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x10764cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x107650: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x107650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_107654:
    // 0x107654: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x107654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x107658: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x107658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x10765c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x10765cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x107660: 0x28e30018  slti        $v1, $a3, 0x18
    ctx->pc = 0x107660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x107664: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x107664u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x107668: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x107668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x10766c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x10766cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x107670: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x107670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x107674: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x107674u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x107678: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x107678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x10767c: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x10767cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x107680: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x107680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x107684: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x107684u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x107688: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x107688u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x10768c: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x10768cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x107690: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x107690u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x107694: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x107694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x107698: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x107698u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
    // 0x10769c: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x10769cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
    // 0x1076a0: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x1076a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
    // 0x1076a4: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x1076a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
    // 0x1076a8: 0xacc00044  sw          $zero, 0x44($a2)
    ctx->pc = 0x1076a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
    // 0x1076ac: 0xacc00048  sw          $zero, 0x48($a2)
    ctx->pc = 0x1076acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 0));
    // 0x1076b0: 0xacc0004c  sw          $zero, 0x4C($a2)
    ctx->pc = 0x1076b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 0));
    // 0x1076b4: 0xacc00050  sw          $zero, 0x50($a2)
    ctx->pc = 0x1076b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 0));
    // 0x1076b8: 0xacc00054  sw          $zero, 0x54($a2)
    ctx->pc = 0x1076b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
    // 0x1076bc: 0xacc00058  sw          $zero, 0x58($a2)
    ctx->pc = 0x1076bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 0));
    // 0x1076c0: 0xacc0005c  sw          $zero, 0x5C($a2)
    ctx->pc = 0x1076c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 0));
    // 0x1076c4: 0xacc00060  sw          $zero, 0x60($a2)
    ctx->pc = 0x1076c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 0));
    // 0x1076c8: 0xacc00064  sw          $zero, 0x64($a2)
    ctx->pc = 0x1076c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 0));
    // 0x1076cc: 0xacc00068  sw          $zero, 0x68($a2)
    ctx->pc = 0x1076ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 0));
    // 0x1076d0: 0xacc0006c  sw          $zero, 0x6C($a2)
    ctx->pc = 0x1076d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 0));
    // 0x1076d4: 0xacc00070  sw          $zero, 0x70($a2)
    ctx->pc = 0x1076d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 0));
    // 0x1076d8: 0xacc00074  sw          $zero, 0x74($a2)
    ctx->pc = 0x1076d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 0));
    // 0x1076dc: 0xacc00078  sw          $zero, 0x78($a2)
    ctx->pc = 0x1076dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 0));
    // 0x1076e0: 0xacc0007c  sw          $zero, 0x7C($a2)
    ctx->pc = 0x1076e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
    // 0x1076e4: 0xacc00080  sw          $zero, 0x80($a2)
    ctx->pc = 0x1076e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 0));
    // 0x1076e8: 0xacc00084  sw          $zero, 0x84($a2)
    ctx->pc = 0x1076e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
    // 0x1076ec: 0xacc00088  sw          $zero, 0x88($a2)
    ctx->pc = 0x1076ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 0));
    // 0x1076f0: 0xacc0008c  sw          $zero, 0x8C($a2)
    ctx->pc = 0x1076f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 0));
    // 0x1076f4: 0xacc00090  sw          $zero, 0x90($a2)
    ctx->pc = 0x1076f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 0));
    // 0x1076f8: 0xacc00094  sw          $zero, 0x94($a2)
    ctx->pc = 0x1076f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 0));
    // 0x1076fc: 0xacc00098  sw          $zero, 0x98($a2)
    ctx->pc = 0x1076fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 0));
    // 0x107700: 0xacc0009c  sw          $zero, 0x9C($a2)
    ctx->pc = 0x107700u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 0));
    // 0x107704: 0xacc000a0  sw          $zero, 0xA0($a2)
    ctx->pc = 0x107704u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 0));
    // 0x107708: 0xacc000a4  sw          $zero, 0xA4($a2)
    ctx->pc = 0x107708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 164), GPR_U32(ctx, 0));
    // 0x10770c: 0xacc000a8  sw          $zero, 0xA8($a2)
    ctx->pc = 0x10770cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 0));
    // 0x107710: 0xacc000ac  sw          $zero, 0xAC($a2)
    ctx->pc = 0x107710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 172), GPR_U32(ctx, 0));
    // 0x107714: 0xacc000b0  sw          $zero, 0xB0($a2)
    ctx->pc = 0x107714u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 176), GPR_U32(ctx, 0));
    // 0x107718: 0xacc000b4  sw          $zero, 0xB4($a2)
    ctx->pc = 0x107718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 0));
    // 0x10771c: 0xacc000b8  sw          $zero, 0xB8($a2)
    ctx->pc = 0x10771cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 0));
    // 0x107720: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x107720u;
    {
        const bool branch_taken_0x107720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107720u;
        // 0x107724: 0xacc000bc  sw          $zero, 0xBC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107720) {
            ctx->pc = 0x107654u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107654;
        }
    }
    ctx->pc = 0x107728u;
    // 0x107728: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x107728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10772c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10772cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107730: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x107730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x107734: 0x24840210  addiu       $a0, $a0, 0x210
    ctx->pc = 0x107734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
label_107738:
    // 0x107738: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x107738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10773c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x10773cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x107740: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x107740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x107744: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x107744u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x107748: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x107748u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x10774c: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x10774cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x107750: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x107750u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x107754: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x107754u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x107758: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x107758u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x10775c: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x10775cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x107760: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x107760u;
    {
        const bool branch_taken_0x107760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107760u;
        // 0x107764: 0xacc00020  sw          $zero, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107760) {
            ctx->pc = 0x107738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107738;
        }
    }
    ctx->pc = 0x107768u;
    // 0x107768: 0x3e00008  jr          $ra
    ctx->pc = 0x107768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107770u;
}
