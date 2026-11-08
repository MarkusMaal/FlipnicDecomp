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

// Function: entry_001eb03c
// Address: 0x1eb03c - 0x1eb09c
void entry_001eb03c_0x1eb03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb03c_0x1eb03c");
#endif

    ctx->pc = 0x1eb03cu;

label_1eb03c:
    // 0x1eb03c: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x1eb03cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1eb040: 0x8e7821  addu        $t7, $a0, $t6
    ctx->pc = 0x1eb040u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x1eb044: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1eb044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1eb048: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1eb048u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1eb04c: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x1eb04cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1eb050: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1eb050u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1eb054: 0x16d582b  sltu        $t3, $t3, $t5
    ctx->pc = 0x1eb054u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1eb058: 0x7dec0120  sq          $t4, 0x120($t7)
    ctx->pc = 0x1eb058u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 288), GPR_VEC(ctx, 12));
    // 0x1eb05c: 0x78ec0010  lq          $t4, 0x10($a3)
    ctx->pc = 0x1eb05cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1eb060: 0x7dec0130  sq          $t4, 0x130($t7)
    ctx->pc = 0x1eb060u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 304), GPR_VEC(ctx, 12));
    // 0x1eb064: 0x78ec0020  lq          $t4, 0x20($a3)
    ctx->pc = 0x1eb064u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1eb068: 0x7dec0140  sq          $t4, 0x140($t7)
    ctx->pc = 0x1eb068u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 320), GPR_VEC(ctx, 12));
    // 0x1eb06c: 0x78ec0030  lq          $t4, 0x30($a3)
    ctx->pc = 0x1eb06cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1eb070: 0x7dec0150  sq          $t4, 0x150($t7)
    ctx->pc = 0x1eb070u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 336), GPR_VEC(ctx, 12));
    // 0x1eb074: 0x78ec0040  lq          $t4, 0x40($a3)
    ctx->pc = 0x1eb074u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1eb078: 0x7dec0160  sq          $t4, 0x160($t7)
    ctx->pc = 0x1eb078u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 352), GPR_VEC(ctx, 12));
    // 0x1eb07c: 0x78ec0050  lq          $t4, 0x50($a3)
    ctx->pc = 0x1eb07cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1eb080: 0x7dec0170  sq          $t4, 0x170($t7)
    ctx->pc = 0x1eb080u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 368), GPR_VEC(ctx, 12));
    // 0x1eb084: 0x78ec0060  lq          $t4, 0x60($a3)
    ctx->pc = 0x1eb084u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x1eb088: 0x7dec0180  sq          $t4, 0x180($t7)
    ctx->pc = 0x1eb088u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 384), GPR_VEC(ctx, 12));
    // 0x1eb08c: 0x78ec0070  lq          $t4, 0x70($a3)
    ctx->pc = 0x1eb08cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x1eb090: 0x7dec0190  sq          $t4, 0x190($t7)
    ctx->pc = 0x1eb090u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 400), GPR_VEC(ctx, 12));
    // 0x1eb094: 0x1560ffe9  bnez        $t3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1EB094u;
    {
        const bool branch_taken_0x1eb094 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB094u;
        // 0x1eb098: 0x24e70080  addiu       $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb094) {
            ctx->pc = 0x1EB03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb03c;
        }
    }
    ctx->pc = 0x1EB09Cu;
}
