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

// Function: entry_00107654
// Address: 0x107654 - 0x107738
void entry_00107654_0x107654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107654_0x107654");
#endif

    ctx->pc = 0x107654u;

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
    ctx->pc = 0x107738u;
}
