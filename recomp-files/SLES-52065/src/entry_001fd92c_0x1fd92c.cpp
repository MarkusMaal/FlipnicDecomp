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

// Function: entry_001fd92c
// Address: 0x1fd92c - 0x1fd960
void entry_001fd92c_0x1fd92c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd92c_0x1fd92c");
#endif

    ctx->pc = 0x1fd92cu;

    // 0x1fd92c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fd92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fd930: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x1fd930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1fd934: 0xdc64ddd0  ld          $a0, -0x2230($v1)
    ctx->pc = 0x1fd934u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294958544)));
    // 0x1fd938: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1fd938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1fd93c: 0x35230001  ori         $v1, $t1, 0x1
    ctx->pc = 0x1fd93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x1fd940: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x1fd940u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x1fd944: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1fd944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1fd948: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD948u;
    {
        const bool branch_taken_0x1fd948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD948u;
        // 0x1fd94c: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd948) {
            ctx->pc = 0x1FD960u;
            return;
        }
    }
    ctx->pc = 0x1FD950u;
    // 0x1fd950: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fd950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fd954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd958: 0xc07f6f2  jal         func_1FDBC8
    ctx->pc = 0x1FD958u;
    SET_GPR_U32(ctx, 31, 0x1FD960u);
    ctx->pc = 0x1FD95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD958u;
    // 0x1fd95c: 0x8c45ddd8  lw          $a1, -0x2228($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDBC8u, 0x1FD958u, 0x1FD960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD960u;
}
