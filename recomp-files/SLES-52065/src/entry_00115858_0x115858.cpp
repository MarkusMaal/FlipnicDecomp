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

// Function: entry_00115858
// Address: 0x115858 - 0x1158a0
void entry_00115858_0x115858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115858_0x115858");
#endif

    ctx->pc = 0x115858u;

    // 0x115858: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x115858u;
    {
        const bool branch_taken_0x115858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115858) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x115860u;
    // 0x115860: 0x92460255  lbu         $a2, 0x255($s2)
    ctx->pc = 0x115860u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x115864: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x115864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x115868: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x115868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x11586c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x11586cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x115870: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x115870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115874: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x115874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x115878: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x115878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11587c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x11587cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x115880: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x115880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x115884: 0xa2430255  sb          $v1, 0x255($s2)
    ctx->pc = 0x115884u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 3));
    // 0x115888: 0xae440264  sw          $a0, 0x264($s2)
    ctx->pc = 0x115888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 4));
    // 0x11588c: 0x8c23e4f8  lw          $v1, -0x1B08($at)
    ctx->pc = 0x11588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960376)));
    // 0x115890: 0xae430268  sw          $v1, 0x268($s2)
    ctx->pc = 0x115890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 3));
    // 0x115894: 0xa2440284  sb          $a0, 0x284($s2)
    ctx->pc = 0x115894u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 4));
    // 0x115898: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x115898u;
    {
        const bool branch_taken_0x115898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115898u;
        // 0x11589c: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115898) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x1158A0u;
}
