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

// Function: entry_00200f14
// Address: 0x200f14 - 0x200f50
void entry_00200f14_0x200f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200f14_0x200f14");
#endif

    ctx->pc = 0x200f14u;

    // 0x200f14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x200f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x200f18: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x200f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x200f1c: 0x2651fff8  addiu       $s1, $s2, -0x8
    ctx->pc = 0x200f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x200f20: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x200f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x200f24: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x200f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x200f28: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x200F28u;
    {
        const bool branch_taken_0x200f28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x200F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F28u;
        // 0x200f2c: 0x2666fffc  addiu       $a2, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f28) {
            ctx->pc = 0x200F50u;
            return;
        }
    }
    ctx->pc = 0x200F30u;
    // 0x200f30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x200f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x200f34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x200f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x200f38: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x200f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x200f3c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x200f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f40: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x200f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x200f44: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x200f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x200f48: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x200F48u;
    {
        const bool branch_taken_0x200f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F48u;
        // 0x200f4c: 0x263b821  addu        $s7, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f48) {
            ctx->pc = 0x201008u;
            return;
        }
    }
    ctx->pc = 0x200F50u;
}
