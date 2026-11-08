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

// Function: entry_001ad270
// Address: 0x1ad270 - 0x1ad2c0
void entry_001ad270_0x1ad270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad270_0x1ad270");
#endif

    ctx->pc = 0x1ad270u;

    // 0x1ad270: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x1ad270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ad274: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1AD274u;
    {
        const bool branch_taken_0x1ad274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD274u;
        // 0x1ad278: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad274) {
            ctx->pc = 0x1AD36Cu;
            return;
        }
    }
    ctx->pc = 0x1AD27Cu;
    // 0x1ad27c: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1AD27Cu;
    {
        const bool branch_taken_0x1ad27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD27Cu;
        // 0x1ad280: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad27c) {
            ctx->pc = 0x1AD350u;
            return;
        }
    }
    ctx->pc = 0x1AD284u;
    // 0x1ad284: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1ad284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ad288: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1AD288u;
    {
        const bool branch_taken_0x1ad288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD288u;
        // 0x1ad28c: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad288) {
            ctx->pc = 0x1AD314u;
            return;
        }
    }
    ctx->pc = 0x1AD290u;
    // 0x1ad290: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AD290u;
    {
        const bool branch_taken_0x1ad290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad290) {
            ctx->pc = 0x1AD30Cu;
            return;
        }
    }
    ctx->pc = 0x1AD298u;
    // 0x1ad298: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1ad298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ad29c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AD29Cu;
    {
        const bool branch_taken_0x1ad29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD29Cu;
        // 0x1ad2a0: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad29c) {
            ctx->pc = 0x1AD308u;
            return;
        }
    }
    ctx->pc = 0x1AD2A4u;
    // 0x1ad2a4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AD2A4u;
    {
        const bool branch_taken_0x1ad2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad2a4) {
            ctx->pc = 0x1AD2E8u;
            return;
        }
    }
    ctx->pc = 0x1AD2ACu;
    // 0x1ad2ac: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ad2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ad2b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD2B0u;
    {
        const bool branch_taken_0x1ad2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad2b0) {
            ctx->pc = 0x1AD2C0u;
            return;
        }
    }
    ctx->pc = 0x1AD2B8u;
    // 0x1ad2b8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1AD2B8u;
    {
        const bool branch_taken_0x1ad2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad2b8) {
            ctx->pc = 0x1AD36Cu;
            return;
        }
    }
    ctx->pc = 0x1AD2C0u;
}
