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

// Function: entry_001fd45c
// Address: 0x1fd45c - 0x1fd47c
void entry_001fd45c_0x1fd45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd45c_0x1fd45c");
#endif

    ctx->pc = 0x1fd45cu;

    // 0x1fd45c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1fd45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1fd460: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FD460u;
    {
        const bool branch_taken_0x1fd460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD460u;
        // 0x1fd464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd460) {
            ctx->pc = 0x1FD4DCu;
            return;
        }
    }
    ctx->pc = 0x1FD468u;
    // 0x1fd468: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x1fd468u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1fd46c: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD46Cu;
    {
        const bool branch_taken_0x1fd46c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd46c) {
            ctx->pc = 0x1FD470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD46Cu;
            // 0x1fd470: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD490u;
            return;
        }
    }
    ctx->pc = 0x1FD474u;
    // 0x1fd474: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FD474u;
    {
        const bool branch_taken_0x1fd474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD474u;
        // 0x1fd478: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd474) {
            ctx->pc = 0x1FD4E0u;
            return;
        }
    }
    ctx->pc = 0x1FD47Cu;
}
