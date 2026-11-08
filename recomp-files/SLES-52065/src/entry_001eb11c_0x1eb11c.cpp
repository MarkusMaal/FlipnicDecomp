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

// Function: entry_001eb11c
// Address: 0x1eb11c - 0x1eb17c
void entry_001eb11c_0x1eb11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb11c_0x1eb11c");
#endif

    ctx->pc = 0x1eb11cu;

label_1eb11c:
    // 0x1eb11c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1eb11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1eb120: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x1eb120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1eb124: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x1eb124u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x1eb128: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1eb128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1eb12c: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x1eb12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1eb130: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1eb130u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1eb134: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x1eb134u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1eb138: 0xad050288  sw          $a1, 0x288($t0)
    ctx->pc = 0x1eb138u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 648), GPR_U32(ctx, 5));
    // 0x1eb13c: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x1eb13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1eb140: 0xad05028c  sw          $a1, 0x28C($t0)
    ctx->pc = 0x1eb140u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 652), GPR_U32(ctx, 5));
    // 0x1eb144: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x1eb144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1eb148: 0xad050290  sw          $a1, 0x290($t0)
    ctx->pc = 0x1eb148u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 656), GPR_U32(ctx, 5));
    // 0x1eb14c: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x1eb14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1eb150: 0xad050294  sw          $a1, 0x294($t0)
    ctx->pc = 0x1eb150u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 5));
    // 0x1eb154: 0x8d450010  lw          $a1, 0x10($t2)
    ctx->pc = 0x1eb154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x1eb158: 0xad050298  sw          $a1, 0x298($t0)
    ctx->pc = 0x1eb158u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 5));
    // 0x1eb15c: 0x8d450014  lw          $a1, 0x14($t2)
    ctx->pc = 0x1eb15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x1eb160: 0xad05029c  sw          $a1, 0x29C($t0)
    ctx->pc = 0x1eb160u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 668), GPR_U32(ctx, 5));
    // 0x1eb164: 0x8d450018  lw          $a1, 0x18($t2)
    ctx->pc = 0x1eb164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x1eb168: 0xad0502a0  sw          $a1, 0x2A0($t0)
    ctx->pc = 0x1eb168u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 672), GPR_U32(ctx, 5));
    // 0x1eb16c: 0x8d45001c  lw          $a1, 0x1C($t2)
    ctx->pc = 0x1eb16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x1eb170: 0xad0502a4  sw          $a1, 0x2A4($t0)
    ctx->pc = 0x1eb170u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 676), GPR_U32(ctx, 5));
    // 0x1eb174: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1EB174u;
    {
        const bool branch_taken_0x1eb174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB174u;
        // 0x1eb178: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb174) {
            ctx->pc = 0x1EB11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb11c;
        }
    }
    ctx->pc = 0x1EB17Cu;
}
