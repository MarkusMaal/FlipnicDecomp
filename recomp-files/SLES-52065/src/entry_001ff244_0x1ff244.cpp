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

// Function: entry_001ff244
// Address: 0x1ff244 - 0x1ff260
void entry_001ff244_0x1ff244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff244_0x1ff244");
#endif

    ctx->pc = 0x1ff244u;

    // 0x1ff244: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ff244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff248: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1ff248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1ff24c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ff24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ff250: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x1ff250u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ff254: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FF254u;
    {
        const bool branch_taken_0x1ff254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF254u;
        // 0x1ff258: 0x25660003  addiu       $a2, $t3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff254) {
            ctx->pc = 0x1FF28Cu;
            return;
        }
    }
    ctx->pc = 0x1FF25Cu;
    // 0x1ff25c: 0x8d290008  lw          $t1, 0x8($t1)
    ctx->pc = 0x1ff25cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    ctx->pc = 0x1ff260u;
}
