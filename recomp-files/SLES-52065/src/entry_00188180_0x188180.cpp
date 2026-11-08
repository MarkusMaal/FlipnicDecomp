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

// Function: entry_00188180
// Address: 0x188180 - 0x188230
void entry_00188180_0x188180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188180_0x188180");
#endif

    ctx->pc = 0x188180u;

    // 0x188180: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x188180u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x188184: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x188184u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x188188: 0x24040073  addiu       $a0, $zero, 0x73
    ctx->pc = 0x188188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x18818c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x18818cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x188190: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x188190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x188194: 0x10a40028  beq         $a1, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x188194u;
    {
        const bool branch_taken_0x188194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x188198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188194u;
        // 0x188198: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188194) {
            ctx->pc = 0x188238u;
            return;
        }
    }
    ctx->pc = 0x18819Cu;
    // 0x18819c: 0x10a40024  beq         $a1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x18819Cu;
    {
        const bool branch_taken_0x18819c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x18819c) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x1881A4u;
    // 0x1881a4: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1881a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1881a8: 0x10a40021  beq         $a1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1881A8u;
    {
        const bool branch_taken_0x1881a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1881ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881A8u;
        // 0x1881ac: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881a8) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x1881B0u;
    // 0x1881b0: 0x10a4001f  beq         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1881B0u;
    {
        const bool branch_taken_0x1881b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1881b0) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x1881B8u;
    // 0x1881b8: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x1881b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1881bc: 0x10a4001c  beq         $a1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1881BCu;
    {
        const bool branch_taken_0x1881bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1881C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881BCu;
        // 0x1881c0: 0x24040067  addiu       $a0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881bc) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x1881C4u;
    // 0x1881c4: 0x10a4001a  beq         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1881C4u;
    {
        const bool branch_taken_0x1881c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1881c4) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x1881CCu;
    // 0x1881cc: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x1881ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1881d0: 0x10a40017  beq         $a1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1881D0u;
    {
        const bool branch_taken_0x1881d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1881D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881D0u;
        // 0x1881d4: 0x24040065  addiu       $a0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881d0) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x1881D8u;
    // 0x1881d8: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1881D8u;
    {
        const bool branch_taken_0x1881d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1881d8) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x1881E0u;
    // 0x1881e0: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x1881e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1881e4: 0x10a40012  beq         $a1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1881E4u;
    {
        const bool branch_taken_0x1881e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1881E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881E4u;
        // 0x1881e8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881e4) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x1881ECu;
    // 0x1881ec: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1881ECu;
    {
        const bool branch_taken_0x1881ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1881ec) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x1881F4u;
    // 0x1881f4: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x1881f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1881f8: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1881F8u;
    {
        const bool branch_taken_0x1881f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1881FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881F8u;
        // 0x1881fc: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881f8) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x188200u;
    // 0x188200: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x188200u;
    {
        const bool branch_taken_0x188200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x188200) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x188208u;
    // 0x188208: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x188208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x18820c: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18820Cu;
    {
        const bool branch_taken_0x18820c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x188210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18820Cu;
        // 0x188210: 0x24040069  addiu       $a0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18820c) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x188214u;
    // 0x188214: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188214u;
    {
        const bool branch_taken_0x188214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x188214) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x18821Cu;
    // 0x18821c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x18821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x188220: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188220u;
    {
        const bool branch_taken_0x188220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x188220) {
            ctx->pc = 0x188230u;
            return;
        }
    }
    ctx->pc = 0x188228u;
    // 0x188228: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x188228u;
    {
        const bool branch_taken_0x188228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188228) {
            ctx->pc = 0x188244u;
            return;
        }
    }
    ctx->pc = 0x188230u;
}
