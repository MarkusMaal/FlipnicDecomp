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

// Function: entry_0013b948
// Address: 0x13b948 - 0x13b978
void entry_0013b948_0x13b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b948_0x13b948");
#endif

    ctx->pc = 0x13b948u;

    // 0x13b948: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x13b948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x13b94c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x13b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x13b950: 0x24426630  addiu       $v0, $v0, 0x6630
    ctx->pc = 0x13b950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26160));
    // 0x13b954: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x13b954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b958: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x13b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x13b95c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x13b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x13b960: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B960u;
    {
        const bool branch_taken_0x13b960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B960u;
        // 0x13b964: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b960) {
            ctx->pc = 0x13B978u;
            return;
        }
    }
    ctx->pc = 0x13B968u;
    // 0x13b968: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x13b968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b96c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x13b96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x13b970: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13b974: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13b974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x13b978u;
}
