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

// Function: entry_00107570
// Address: 0x107570 - 0x107654
void entry_00107570_0x107570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107570_0x107570");
#endif

    ctx->pc = 0x107570u;

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
    ctx->pc = 0x107654u;
}
