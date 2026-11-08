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

// Function: entry_001fb9d0
// Address: 0x1fb9d0 - 0x1fba08
void entry_001fb9d0_0x1fb9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb9d0_0x1fb9d0");
#endif

    ctx->pc = 0x1fb9d0u;

    // 0x1fb9d0: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x1fb9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1fb9d4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FB9D4u;
    {
        const bool branch_taken_0x1fb9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9d4) {
            ctx->pc = 0x1FBA2Cu;
            return;
        }
    }
    ctx->pc = 0x1FB9DCu;
    // 0x1fb9dc: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FB9DCu;
    {
        const bool branch_taken_0x1fb9dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9DCu;
        // 0x1fb9e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9dc) {
            ctx->pc = 0x1FBA08u;
            return;
        }
    }
    ctx->pc = 0x1FB9E4u;
    // 0x1fb9e4: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x1fb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x1fb9e8: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x1fb9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x1fb9ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb9f0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1fb9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1fb9f4: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x1fb9f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fb9f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fb9f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb9fc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1FB9FCu;
    {
        const bool branch_taken_0x1fb9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9FCu;
        // 0x1fba00: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9fc) {
            ctx->pc = 0x1FBA80u;
            return;
        }
    }
    ctx->pc = 0x1FBA04u;
    // 0x1fba04: 0x0  nop
    ctx->pc = 0x1fba04u;
    // NOP
    ctx->pc = 0x1fba08u;
}
